#pragma once

#include <iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>
#include<vector>
#include <Eigen/Dense>
#include <Eigen/Eigenvalues>
#include "Zveno.h"
#define PI 3.14159265 

using namespace Eigen;
using namespace std;
int N = 3;
double m;
double J;
double l1;
double l2;
double l3;
double c1;
double c2;
double c;
double h1;
double h2;
double h;
double k2;
double k3;
double a;
double b;
double al = a * PI / 180;
double bet = b * PI / 180;
//заполняем матрицу
void Fill_Matr(double** M, double** B, double** C, double** S) {

  M[0][0] = m; M[0][1] = 0; M[0][2] = -(m * l1 * sin(al + bet));
  M[1][0] = 0; M[1][1] = m; M[1][2] = m * l1 * cos(al + bet);
  M[2][0] = -(m * l1 * sin(al + bet)); M[2][1] = m * l1 * cos(al + bet); M[2][2] = (J + m * pow(l1, 2));

  B[0][0] = h1 * pow(cos(bet), 2) + h2 * pow(sin(bet), 2); B[0][1] = 0.5 * (h1 - h2) * sin(2 * bet); B[0][2] = 0;
  B[1][0] = 0.5 * (h1 - h2) * sin(2 * bet); B[1][1] = h2 * pow(cos(bet), 2) + h1 * pow(sin(bet), 2); B[1][2] = 0;
  B[2][0] = 0; B[2][1] = 0; B[2][2] = h;

  C[0][0] = c1 * pow(cos(bet), 2) + c2 * pow(sin(bet), 2); C[0][1] = 0.5 * (c1 - c2) * sin(2 * bet); C[0][2] = 0;
  C[1][0] = 0.5 * (c1 - c2) * sin(2 * bet); C[1][1] = c2 * pow(cos(bet), 2) + c1 * pow(sin(bet), 2); C[1][2] = 0;
  C[2][0] = 0; C[2][1] = 0; C[2][2] = c;

  S[0][0] = 0; S[0][1] = 0; S[0][2] = k2 * l2;
  S[1][0] = k3; S[1][1] = 0; S[1][2] = k3 * l3;
  S[2][0] = k3 * l3 - k2 * l2; S[2][1] = 0; S[2][2] = 0;

}
//поиск звеньев, с указанием типа связи, для дальнейшего поиска работы
//для работы функции была создана структура zveno включающая координаты и тип связи
//где 1 = y, 2= z, 3 = Ψ, S - направленая связь, М - инерционная, В - диссипативная, С- упругая
//реализация в библиотеке "zveno.h"
vector<zveno> Tsep(double** M, double** B, double** C, double** S) {
  vector<zveno> tsep;
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
      if (S[j][i] != 0 && i != j)
        tsep.push_back(zveno(i + 1, j + 1, "S"));
  for (int i = 0; i < N; i++)
    for (int j = i + 1; j < N; j++)
      if (M[i][j] != 0)
        tsep.push_back(zveno(i + 1, j + 1, "M"));
  for (int i = 0; i < N; i++)
    for (int j = i + 1; j < N; j++)
      if (B[i][j] != 0)
        tsep.push_back(zveno(i + 1, j + 1, "B"));
  for (int i = 0; i < N; i++)
    for (int j = i + 1; j < N; j++)
      if (C[i][j] != 0)
        tsep.push_back(zveno(i + 1, j + 1, "C"));
  return tsep;
}
//сотировка циклов по проценту работы
void SortSPerCycle(double* P, string* S) {
  vector<pair<double, string>> CycPer;
  for (int i = 0; i < 20; i++)
  {
    CycPer.push_back(make_pair(P[i], S[i]));
  }
  sort(CycPer.begin(), CycPer.end(), greater<>());
  for (vector<pair<double, string>>::iterator it = CycPer.begin(); it != CycPer.end(); ++it) {
    int i = std::distance(CycPer.begin(), it);
    P[i] = it->first;
    S[i] = it->second;
  }

}
//нахождение обратной матрицы
double** inversion(double** B, int N)
{
  double temp;
  double** A = new double* [N];

  for (int i = 0; i < N; i++)
    A[i] = new double[N];
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
      A[i][j] = B[i][j];
  double** E = new double* [N];

  for (int i = 0; i < N; i++)
    E[i] = new double[N];

  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
    {
      E[i][j] = 0.0;

      if (i == j)
        E[i][j] = 1.0;
    }

  for (int k = 0; k < N; k++)
  {
    temp = A[k][k];

    for (int j = 0; j < N; j++)
    {
      A[k][j] /= temp;
      E[k][j] /= temp;
    }

    for (int i = k + 1; i < N; i++)
    {
      temp = A[i][k];

      for (int j = 0; j < N; j++)
      {
        A[i][j] -= A[k][j] * temp;
        E[i][j] -= E[k][j] * temp;
      }
    }
  }

  for (int k = N - 1; k > 0; k--)
  {
    for (int i = k - 1; i >= 0; i--)
    {
      temp = A[i][k];

      for (int j = 0; j < N; j++)
      {
        A[i][j] -= A[k][j] * temp;
        E[i][j] -= E[k][j] * temp;
      }
    }
  }

  return E;
}
//умножение матриц, необходимо для поиска собственных векторов
double** MatrixMul(double** A, double** B)
{
  double** C = new double* [N];
  for (int i = 0; i < N; i++) C[i] = new double[N];
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
    {
      C[i][j] = 0;
      for (int k = 0; k < N; k++)
        C[i][j] += A[i][k] * B[k][j];
    }
  return C;
}
//поиск собственых векторов
void EigVec(double** X, double* val, double** eigvec, double* frecuency) {
  MatrixXd A = MatrixXd(N, N);
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++) A(i, j) = X[i][j];
  EigenSolver<MatrixXd> es(A);
  VectorXd EigVal = es.eigenvalues().real();
  MatrixXd EigVec = es.eigenvectors().real();
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
      eigvec[i][j] = EigVec(i, j);
  for (int i = 0; i < N; i++)
    val[i] = sqrt(abs(EigVal(i)));
  for (int i = 0; i < N; i++)
    frecuency[i] = val[i] / (2 * PI);
}
//условие для сортировки по возрастанию
int cmp(const void* a, const void* b)
{
  const double* ad, * bd;

  ad = (const double*)a;
  bd = (const double*)b;

  if (*ad < *bd)
  {
    return -1;
  }
  else if (*ad > *bd)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
//и убыванию
int cmp1(const void* a, const void* b)
{
  const double* ad, * bd;

  ad = (const double*)a;
  bd = (const double*)b;

  if (*ad > *bd)
  {
    return -1;
  }
  else if (*ad < *bd)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
//сортировка собственных чисел и соответствующих им частот и векторов
void VecSort(double* eigen, double** evec, double* freq) {
  double* _fr = new double[N];
  for (int i = 0; i < N; i++) _fr[i] = freq[i];
  double* _eig = new double[N];
  for (int i = 0; i < N; i++) _eig[i] = eigen[i];
  qsort(_fr, N, sizeof(double), cmp);
  qsort(_eig, N, sizeof(double), cmp);
  double** _evec = new double* [N];
  for (int i = 0; i < N; i++) _evec[i] = new double[N];
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++) {
      if (_fr[i] == freq[j]) {
        for (int k = 0; k < N; k++)
          _evec[k][i] = evec[k][j];
      }
    }
  for (int i = 0; i < N; i++) freq[i] = _fr[i];
  for (int i = 0; i < N; i++) eigen[i] = _eig[i];
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
      evec[i][j] = _evec[i][j];
}
//условие для задания степени при поиске работы
int POW(zveno T) {
  int P;
  switch (T.x) {
  case 1:
    P = 3;
    break;
  case 2:
    P = 2;
    break;
  case 3:
    P = 1;
    break;
  }
  return P;
}
//поиск работы звеньев в зависимости от их типа связи
double* Job(vector<zveno> T, double** M, double** B, double** C, double** S, double* o, double** V, int k) {
  double* job = new double[T.size()];
  for (int i = 0; i < T.size(); i++) {
    if (T[i].type == "S")
      job[i] = S[T[i].x - 1][T[i].y - 1] * V[T[i].x - 1][k] * V[k][T[i].y - 1] * pow(o[k], POW(T[i]));/**/
    else if (T[i].type == "M")
      job[i] = M[T[i].x - 1][T[i].y - 1] * V[T[i].x - 1][k] * V[T[i].y - 1][k];
    else if (T[i].type == "B")
      job[i] = B[T[i].x - 1][T[i].y - 1] * V[T[i].x - 1][k] * V[T[i].y - 1][k];
    else if (T[i].type == "C")
      job[i] = C[T[i].x - 1][T[i].y - 1] * V[T[i].x - 1][k] * V[T[i].y - 1][k];
  }
  return job;
}
//нахождение процента работы звена
double* JobPercent(vector<zveno> T, double* job) {
  double* per = new double[T.size()];
  double Sum = 0;
  for (int i = 0; i < T.size(); i++) {
    Sum += job[i];
  }
  for (int i = 0; i < T.size(); i++)
    per[i] = job[i] / Sum * 100;
  return per;
}
//построение циклов по заданным условиям
void FillCycles(string* S) {
  S[0] = "1 -----> 2 - - - 1";
  S[1] = "1 -----> 2 ----- 1";
  S[2] = "1 -----> 2 -·-·- 3 -----> 1";
  S[3] = "1 -----> 2 -·-·- 3 -·-·- 1";
  S[4] = "1 -----> 3 -----> 1";
  S[5] = "1 -----> 3 -·-·- 1";
  S[6] = "1 -----> 3 -----> 2 ----- 1";
  S[7] = "1 -----> 3 -----> 2 - - - 1";
  S[8] = "1 -----> 3 -·-·- 2 ----- 1";
  S[9] = "1 -----> 3 -·-·- 2 - - - 1";
  S[10] = "3 -----> 1 -----> 3";
  S[11] = "3 -----> 1 -·-·- 3";
  S[12] = "3 -----> 1 -----> 2 -·-·- 3";
  S[13] = "3 -----> 1 ----- 2 -·-·- 3";
  S[14] = "3 -----> 1 - - - 2 -·-·- 3";
  S[15] = "3 -----> 2 -·-·- 3";
  S[16] = "3 -----> 2 ----- 1 -----> 3";
  S[17] = "3 -----> 2 ----- 1 -·-·- 3";
  S[18] = "3 -----> 2 - - - 1 -----> 3";
  S[19] = "3 -----> 2 - - - 1 -·-·- 3";
}
//заполнение работы циклов с помощью добавления работ отдельных звеньев
double* JobCycle(double* C, double* j) {
  C[0] = j[0] + j[6];
  C[1] = j[0] + j[7];
  C[2] = j[0] + j[5] + j[2];
  C[3] = j[0] + j[5] + j[4];
  C[4] = j[1] + j[2];
  C[5] = j[1] + j[4];
  C[6] = j[1] + j[3] + j[7];
  C[7] = j[1] + j[3] + j[6];
  C[8] = j[1] + j[5] + j[7];
  C[9] = j[1] + j[5] + j[6];
  C[10] = j[2] + j[1];
  C[11] = j[2] + j[4];
  C[12] = j[2] + j[0] + j[5];
  C[13] = j[2] + j[7] + j[5];
  C[14] = j[2] + j[6] + j[5];
  C[15] = j[3] + j[5];
  C[16] = j[3] + j[7] + j[1];
  C[17] = j[3] + j[7] + j[4];
  C[18] = j[3] + j[6] + j[1];
  C[19] = j[3] + j[6] + j[4];
  return C;
}
//нахождение процента работы цикла
double* JobCyclePercent(double* job) {
  double* per = new double[20];
  double Sum = 0;
  for (int i = 0; i < 20; i++) {
    Sum += job[i];
  }
  for (int i = 0; i < 20; i++)
    per[i] = job[i] / Sum * 100;
  return per;
}
//сортировка циклов по работе
void SortCycle(double* C, string* S) {
  double* c = new double[20];
  for (int i = 0; i < 20; i++)
    c[i] = C[i];
  string* tmp = new string[20];
  qsort(c, 20, sizeof(double), cmp1);
  for (int i = 0; i < 20; i++)
    for (int j = 0; j < 20; j++)
      if (c[i] == C[j])
        tmp[i] = S[j];
  for (int i = 0; i < 20; i++)
    S[i] = tmp[i];
  for (int i = 0; i < 20; i++)
    C[i] = c[i];
}