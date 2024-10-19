#pragma once
#include "Find.h"

namespace EnergyCycles {

  using namespace System;
  using namespace System::ComponentModel;
  using namespace System::Collections;
  using namespace System::Windows::Forms;
  using namespace System::Data;
  using namespace System::Drawing;

  /// <summary>
  /// Сводка для MyForm
  /// </summary>
  public ref class MyForm : public System::Windows::Forms::Form
  {
  public:
    MyForm(void)
    {
      InitializeComponent();
      //
      //TODO: добавьте код конструктора
      //
    }

  protected:
    /// <summary>
    /// Освободить все используемые ресурсы.
    /// </summary>
    ~MyForm()
    {
      if (components)
      {
        delete components;
      }
    }
  private: System::Windows::Forms::TabPage^ tabPage6;
  protected:
  private: System::Windows::Forms::DataGridView^ dataGridView6;
  private: System::Windows::Forms::TabPage^ tabPage5;
  private: System::Windows::Forms::DataGridView^ dataGridView5;
  private: System::Windows::Forms::TabPage^ tabPage3;
  private: System::Windows::Forms::DataGridView^ dataGridView4;
  private: System::Windows::Forms::DataGridView^ dataGridView3;
  private: System::Windows::Forms::TabPage^ tabPage2;
  private: System::Windows::Forms::DataGridView^ dataGridView1;
  private: System::Windows::Forms::DataGridView^ dataGridView2;
  private: System::Windows::Forms::Label^ label3;
  private: System::Windows::Forms::TabPage^ tabPage1;
  private: System::Windows::Forms::Button^ button1;
  private: System::Windows::Forms::TextBox^ textBox15;
  private: System::Windows::Forms::TextBox^ textBox14;
  private: System::Windows::Forms::TextBox^ textBox13;
  private: System::Windows::Forms::TextBox^ textBox12;
  private: System::Windows::Forms::TextBox^ textBox11;
  private: System::Windows::Forms::TextBox^ textBox10;
  private: System::Windows::Forms::TextBox^ textBox9;
  private: System::Windows::Forms::TextBox^ textBox8;
  private: System::Windows::Forms::TextBox^ textBox7;
  private: System::Windows::Forms::TextBox^ textBox6;
  private: System::Windows::Forms::TextBox^ textBox5;
  private: System::Windows::Forms::TextBox^ textBox4;
  private: System::Windows::Forms::TextBox^ textBox3;
  private: System::Windows::Forms::TextBox^ textBox2;
  private: System::Windows::Forms::TextBox^ textBox1;
  private: System::Windows::Forms::TabControl^ tabControl1;
  private: System::Windows::Forms::TabPage^ tabPage4;
  private: System::Windows::Forms::DataGridView^ dataGridView7;
  private: System::Windows::Forms::TabPage^ tabPage7;
  private: System::Windows::Forms::DataGridView^ dataGridView8;
  private: System::Windows::Forms::Label^ label16;
  private: System::Windows::Forms::Label^ label15;
  private: System::Windows::Forms::Label^ label14;
  private: System::Windows::Forms::Label^ label13;
  private: System::Windows::Forms::Label^ label12;
  private: System::Windows::Forms::Label^ label11;
  private: System::Windows::Forms::Label^ label10;
  private: System::Windows::Forms::Label^ label9;
  private: System::Windows::Forms::Label^ label8;
  private: System::Windows::Forms::Label^ label7;
  private: System::Windows::Forms::Label^ label6;
  private: System::Windows::Forms::Label^ label5;
  private: System::Windows::Forms::Label^ label4;
  private: System::Windows::Forms::Label^ label2;
  private: System::Windows::Forms::Label^ label1;
  private: System::Windows::Forms::Label^ label21;
  private: System::Windows::Forms::Label^ label20;
  private: System::Windows::Forms::Label^ label19;
  private: System::Windows::Forms::Label^ label18;
  private: System::Windows::Forms::Label^ label17;
  private: System::Windows::Forms::Button^ button2;
  private: System::Windows::Forms::Label^ label22;
  private: System::Windows::Forms::Label^ label23;




  private:


  protected:
  private:


  private:


  private:


  private:


  private:














  private:
    /// <summary>
    /// Обязательная переменная конструктора.
    /// </summary>
    System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
    /// <summary>
    /// Требуемый метод для поддержки конструктора — не изменяйте 
    /// содержимое этого метода с помощью редактора кода.
    /// </summary>
    void InitializeComponent(void)
    {
      this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
      this->label21 = (gcnew System::Windows::Forms::Label());
      this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
      this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
      this->label20 = (gcnew System::Windows::Forms::Label());
      this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
      this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
      this->label19 = (gcnew System::Windows::Forms::Label());
      this->label18 = (gcnew System::Windows::Forms::Label());
      this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
      this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
      this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
      this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
      this->label17 = (gcnew System::Windows::Forms::Label());
      this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
      this->label3 = (gcnew System::Windows::Forms::Label());
      this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
      this->button2 = (gcnew System::Windows::Forms::Button());
      this->label16 = (gcnew System::Windows::Forms::Label());
      this->label15 = (gcnew System::Windows::Forms::Label());
      this->label14 = (gcnew System::Windows::Forms::Label());
      this->label13 = (gcnew System::Windows::Forms::Label());
      this->label12 = (gcnew System::Windows::Forms::Label());
      this->label11 = (gcnew System::Windows::Forms::Label());
      this->label10 = (gcnew System::Windows::Forms::Label());
      this->label9 = (gcnew System::Windows::Forms::Label());
      this->label8 = (gcnew System::Windows::Forms::Label());
      this->label7 = (gcnew System::Windows::Forms::Label());
      this->label6 = (gcnew System::Windows::Forms::Label());
      this->label5 = (gcnew System::Windows::Forms::Label());
      this->label4 = (gcnew System::Windows::Forms::Label());
      this->label2 = (gcnew System::Windows::Forms::Label());
      this->label1 = (gcnew System::Windows::Forms::Label());
      this->button1 = (gcnew System::Windows::Forms::Button());
      this->textBox15 = (gcnew System::Windows::Forms::TextBox());
      this->textBox14 = (gcnew System::Windows::Forms::TextBox());
      this->textBox13 = (gcnew System::Windows::Forms::TextBox());
      this->textBox12 = (gcnew System::Windows::Forms::TextBox());
      this->textBox11 = (gcnew System::Windows::Forms::TextBox());
      this->textBox10 = (gcnew System::Windows::Forms::TextBox());
      this->textBox9 = (gcnew System::Windows::Forms::TextBox());
      this->textBox8 = (gcnew System::Windows::Forms::TextBox());
      this->textBox7 = (gcnew System::Windows::Forms::TextBox());
      this->textBox6 = (gcnew System::Windows::Forms::TextBox());
      this->textBox5 = (gcnew System::Windows::Forms::TextBox());
      this->textBox4 = (gcnew System::Windows::Forms::TextBox());
      this->textBox3 = (gcnew System::Windows::Forms::TextBox());
      this->textBox2 = (gcnew System::Windows::Forms::TextBox());
      this->textBox1 = (gcnew System::Windows::Forms::TextBox());
      this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
      this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
      this->label22 = (gcnew System::Windows::Forms::Label());
      this->dataGridView7 = (gcnew System::Windows::Forms::DataGridView());
      this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
      this->label23 = (gcnew System::Windows::Forms::Label());
      this->dataGridView8 = (gcnew System::Windows::Forms::DataGridView());
      this->tabPage6->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
      this->tabPage5->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
      this->tabPage3->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
      this->tabPage2->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
      this->tabPage1->SuspendLayout();
      this->tabControl1->SuspendLayout();
      this->tabPage4->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->BeginInit();
      this->tabPage7->SuspendLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->BeginInit();
      this->SuspendLayout();
      // 
      // tabPage6
      // 
      this->tabPage6->Controls->Add(this->label21);
      this->tabPage6->Controls->Add(this->dataGridView6);
      this->tabPage6->Location = System::Drawing::Point(4, 22);
      this->tabPage6->Name = L"tabPage6";
      this->tabPage6->Size = System::Drawing::Size(482, 357);
      this->tabPage6->TabIndex = 5;
      this->tabPage6->Text = L"1-я форма";
      this->tabPage6->UseVisualStyleBackColor = true;
      // 
      // label21
      // 
      this->label21->AutoSize = true;
      this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label21->Location = System::Drawing::Point(14, 12);
      this->label21->Name = L"label21";
      this->label21->Size = System::Drawing::Size(334, 20);
      this->label21->TabIndex = 8;
      this->label21->Text = L"ЦИКЛЫ НА 1-ОЙ ФОРМЕ КОЛЕБАНИЙ";
      // 
      // dataGridView6
      // 
      this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView6->Location = System::Drawing::Point(18, 44);
      this->dataGridView6->Name = L"dataGridView6";
      this->dataGridView6->Size = System::Drawing::Size(443, 299);
      this->dataGridView6->TabIndex = 7;
      this->dataGridView6->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView6_CellContentClick);
      // 
      // tabPage5
      // 
      this->tabPage5->Controls->Add(this->label20);
      this->tabPage5->Controls->Add(this->dataGridView5);
      this->tabPage5->Location = System::Drawing::Point(4, 22);
      this->tabPage5->Name = L"tabPage5";
      this->tabPage5->Padding = System::Windows::Forms::Padding(3);
      this->tabPage5->Size = System::Drawing::Size(482, 357);
      this->tabPage5->TabIndex = 4;
      this->tabPage5->Text = L"Вектора";
      this->tabPage5->UseVisualStyleBackColor = true;
      // 
      // label20
      // 
      this->label20->AutoSize = true;
      this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label20->Location = System::Drawing::Point(65, 17);
      this->label20->Name = L"label20";
      this->label20->Size = System::Drawing::Size(338, 20);
      this->label20->TabIndex = 7;
      this->label20->Text = L"СОБСТВЕННЫЕ ЧАСТОТЫ И ВЕКТОРЫ";
      this->label20->Click += gcnew System::EventHandler(this, &MyForm::label20_Click);
      // 
      // dataGridView5
      // 
      this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView5->Location = System::Drawing::Point(6, 52);
      this->dataGridView5->Name = L"dataGridView5";
      this->dataGridView5->Size = System::Drawing::Size(470, 299);
      this->dataGridView5->TabIndex = 6;
      this->dataGridView5->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView5_CellContentClick);
      // 
      // tabPage3
      // 
      this->tabPage3->Controls->Add(this->label19);
      this->tabPage3->Controls->Add(this->label18);
      this->tabPage3->Controls->Add(this->dataGridView4);
      this->tabPage3->Controls->Add(this->dataGridView3);
      this->tabPage3->Location = System::Drawing::Point(4, 22);
      this->tabPage3->Name = L"tabPage3";
      this->tabPage3->Padding = System::Windows::Forms::Padding(3);
      this->tabPage3->Size = System::Drawing::Size(482, 357);
      this->tabPage3->TabIndex = 2;
      this->tabPage3->Text = L"Матрицы С Сs";
      this->tabPage3->UseVisualStyleBackColor = true;
      // 
      // label19
      // 
      this->label19->AutoSize = true;
      this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label19->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
      this->label19->Location = System::Drawing::Point(255, 15);
      this->label19->Name = L"label19";
      this->label19->Size = System::Drawing::Size(171, 20);
      this->label19->TabIndex = 8;
      this->label19->Text = L"МАТРИЦА СВЯЗЕЙ";
      // 
      // label18
      // 
      this->label18->AutoSize = true;
      this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label18->Location = System::Drawing::Point(6, 15);
      this->label18->Name = L"label18";
      this->label18->Size = System::Drawing::Size(204, 20);
      this->label18->TabIndex = 7;
      this->label18->Text = L"МАТРИЦА ЖЕСТКОСТИ";
      // 
      // dataGridView4
      // 
      this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView4->Location = System::Drawing::Point(255, 46);
      this->dataGridView4->Name = L"dataGridView4";
      this->dataGridView4->Size = System::Drawing::Size(221, 210);
      this->dataGridView4->TabIndex = 6;
      this->dataGridView4->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView4_CellContentClick);
      // 
      // dataGridView3
      // 
      this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView3->Location = System::Drawing::Point(10, 46);
      this->dataGridView3->Name = L"dataGridView3";
      this->dataGridView3->Size = System::Drawing::Size(221, 210);
      this->dataGridView3->TabIndex = 5;
      this->dataGridView3->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView3_CellContentClick_1);
      // 
      // tabPage2
      // 
      this->tabPage2->Controls->Add(this->dataGridView2);
      this->tabPage2->Controls->Add(this->label17);
      this->tabPage2->Controls->Add(this->dataGridView1);
      this->tabPage2->Controls->Add(this->label3);
      this->tabPage2->Location = System::Drawing::Point(4, 22);
      this->tabPage2->Name = L"tabPage2";
      this->tabPage2->Padding = System::Windows::Forms::Padding(3);
      this->tabPage2->Size = System::Drawing::Size(482, 357);
      this->tabPage2->TabIndex = 1;
      this->tabPage2->Text = L"Матрицы М B";
      this->tabPage2->UseVisualStyleBackColor = true;
      // 
      // dataGridView2
      // 
      this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView2->Location = System::Drawing::Point(10, 46);
      this->dataGridView2->Name = L"dataGridView2";
      this->dataGridView2->Size = System::Drawing::Size(221, 210);
      this->dataGridView2->TabIndex = 3;
      this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
      // 
      // label17
      // 
      this->label17->AutoSize = true;
      this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label17->Location = System::Drawing::Point(255, 15);
      this->label17->Name = L"label17";
      this->label17->Size = System::Drawing::Size(221, 20);
      this->label17->TabIndex = 5;
      this->label17->Text = L"МАТРИЦА ДИССИПАЦИИ";
      // 
      // dataGridView1
      // 
      this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView1->Location = System::Drawing::Point(255, 46);
      this->dataGridView1->Name = L"dataGridView1";
      this->dataGridView1->Size = System::Drawing::Size(221, 210);
      this->dataGridView1->TabIndex = 4;
      this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
      // 
      // label3
      // 
      this->label3->AutoSize = true;
      this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label3->Location = System::Drawing::Point(6, 15);
      this->label3->Name = L"label3";
      this->label3->Size = System::Drawing::Size(183, 20);
      this->label3->TabIndex = 2;
      this->label3->Text = L"МАТРИЦА ИНЕРЦИИ";
      // 
      // tabPage1
      // 
      this->tabPage1->Controls->Add(this->button2);
      this->tabPage1->Controls->Add(this->label16);
      this->tabPage1->Controls->Add(this->label15);
      this->tabPage1->Controls->Add(this->label14);
      this->tabPage1->Controls->Add(this->label13);
      this->tabPage1->Controls->Add(this->label12);
      this->tabPage1->Controls->Add(this->label11);
      this->tabPage1->Controls->Add(this->label10);
      this->tabPage1->Controls->Add(this->label9);
      this->tabPage1->Controls->Add(this->label8);
      this->tabPage1->Controls->Add(this->label7);
      this->tabPage1->Controls->Add(this->label6);
      this->tabPage1->Controls->Add(this->label5);
      this->tabPage1->Controls->Add(this->label4);
      this->tabPage1->Controls->Add(this->label2);
      this->tabPage1->Controls->Add(this->label1);
      this->tabPage1->Controls->Add(this->button1);
      this->tabPage1->Controls->Add(this->textBox15);
      this->tabPage1->Controls->Add(this->textBox14);
      this->tabPage1->Controls->Add(this->textBox13);
      this->tabPage1->Controls->Add(this->textBox12);
      this->tabPage1->Controls->Add(this->textBox11);
      this->tabPage1->Controls->Add(this->textBox10);
      this->tabPage1->Controls->Add(this->textBox9);
      this->tabPage1->Controls->Add(this->textBox8);
      this->tabPage1->Controls->Add(this->textBox7);
      this->tabPage1->Controls->Add(this->textBox6);
      this->tabPage1->Controls->Add(this->textBox5);
      this->tabPage1->Controls->Add(this->textBox4);
      this->tabPage1->Controls->Add(this->textBox3);
      this->tabPage1->Controls->Add(this->textBox2);
      this->tabPage1->Controls->Add(this->textBox1);
      this->tabPage1->Location = System::Drawing::Point(4, 22);
      this->tabPage1->Name = L"tabPage1";
      this->tabPage1->Padding = System::Windows::Forms::Padding(3);
      this->tabPage1->Size = System::Drawing::Size(482, 357);
      this->tabPage1->TabIndex = 0;
      this->tabPage1->Text = L"Ввод";
      this->tabPage1->UseVisualStyleBackColor = true;
      this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
      // 
      // button2
      // 
      this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
      this->button2->Location = System::Drawing::Point(363, 300);
      this->button2->Name = L"button2";
      this->button2->Size = System::Drawing::Size(100, 36);
      this->button2->TabIndex = 31;
      this->button2->Text = L"START";
      this->button2->UseVisualStyleBackColor = true;
      this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
      // 
      // label16
      // 
      this->label16->AutoSize = true;
      this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label16->Location = System::Drawing::Point(213, 260);
      this->label16->Name = L"label16";
      this->label16->Size = System::Drawing::Size(51, 20);
      this->label16->TabIndex = 30;
      this->label16->Text = L"betta";
      // 
      // label15
      // 
      this->label15->AutoSize = true;
      this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label15->Location = System::Drawing::Point(56, 60);
      this->label15->Name = L"label15";
      this->label15->Size = System::Drawing::Size(18, 20);
      this->label15->TabIndex = 29;
      this->label15->Text = L"J";
      // 
      // label14
      // 
      this->label14->AutoSize = true;
      this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label14->Location = System::Drawing::Point(51, 100);
      this->label14->Name = L"label14";
      this->label14->Size = System::Drawing::Size(23, 20);
      this->label14->TabIndex = 28;
      this->label14->Text = L"l1";
      // 
      // label13
      // 
      this->label13->AutoSize = true;
      this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label13->Location = System::Drawing::Point(51, 140);
      this->label13->Name = L"label13";
      this->label13->Size = System::Drawing::Size(23, 20);
      this->label13->TabIndex = 27;
      this->label13->Text = L"l2";
      // 
      // label12
      // 
      this->label12->AutoSize = true;
      this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label12->Location = System::Drawing::Point(51, 180);
      this->label12->Name = L"label12";
      this->label12->Size = System::Drawing::Size(23, 20);
      this->label12->TabIndex = 26;
      this->label12->Text = L"l3";
      // 
      // label11
      // 
      this->label11->AutoSize = true;
      this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label11->Location = System::Drawing::Point(46, 220);
      this->label11->Name = L"label11";
      this->label11->Size = System::Drawing::Size(28, 20);
      this->label11->TabIndex = 25;
      this->label11->Text = L"c1";
      // 
      // label10
      // 
      this->label10->AutoSize = true;
      this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label10->Location = System::Drawing::Point(235, 60);
      this->label10->Name = L"label10";
      this->label10->Size = System::Drawing::Size(29, 20);
      this->label10->TabIndex = 24;
      this->label10->Text = L"h2";
      // 
      // label9
      // 
      this->label9->AutoSize = true;
      this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label9->Location = System::Drawing::Point(46, 260);
      this->label9->Name = L"label9";
      this->label9->Size = System::Drawing::Size(28, 20);
      this->label9->TabIndex = 23;
      this->label9->Text = L"c2";
      // 
      // label8
      // 
      this->label8->AutoSize = true;
      this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label8->Location = System::Drawing::Point(56, 298);
      this->label8->Name = L"label8";
      this->label8->Size = System::Drawing::Size(18, 20);
      this->label8->TabIndex = 22;
      this->label8->Text = L"c";
      // 
      // label7
      // 
      this->label7->AutoSize = true;
      this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label7->Location = System::Drawing::Point(235, 20);
      this->label7->Name = L"label7";
      this->label7->Size = System::Drawing::Size(29, 20);
      this->label7->TabIndex = 21;
      this->label7->Text = L"h1";
      // 
      // label6
      // 
      this->label6->AutoSize = true;
      this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label6->Location = System::Drawing::Point(211, 220);
      this->label6->Name = L"label6";
      this->label6->Size = System::Drawing::Size(53, 20);
      this->label6->TabIndex = 20;
      this->label6->Text = L"alpha";
      // 
      // label5
      // 
      this->label5->AutoSize = true;
      this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label5->Location = System::Drawing::Point(235, 100);
      this->label5->Name = L"label5";
      this->label5->Size = System::Drawing::Size(29, 20);
      this->label5->TabIndex = 19;
      this->label5->Text = L"h3";
      // 
      // label4
      // 
      this->label4->AutoSize = true;
      this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label4->Location = System::Drawing::Point(236, 140);
      this->label4->Name = L"label4";
      this->label4->Size = System::Drawing::Size(28, 20);
      this->label4->TabIndex = 18;
      this->label4->Text = L"k2";
      // 
      // label2
      // 
      this->label2->AutoSize = true;
      this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label2->Location = System::Drawing::Point(236, 180);
      this->label2->Name = L"label2";
      this->label2->Size = System::Drawing::Size(28, 20);
      this->label2->TabIndex = 17;
      this->label2->Text = L"k3";
      // 
      // label1
      // 
      this->label1->AutoSize = true;
      this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label1->Location = System::Drawing::Point(51, 20);
      this->label1->Name = L"label1";
      this->label1->Size = System::Drawing::Size(23, 20);
      this->label1->TabIndex = 16;
      this->label1->Text = L"m";
      // 
      // button1
      // 
      this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
      this->button1->Location = System::Drawing::Point(215, 300);
      this->button1->Name = L"button1";
      this->button1->Size = System::Drawing::Size(100, 36);
      this->button1->TabIndex = 15;
      this->button1->Text = L"INPUT";
      this->button1->UseVisualStyleBackColor = true;
      this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
      // 
      // textBox15
      // 
      this->textBox15->Location = System::Drawing::Point(80, 300);
      this->textBox15->Name = L"textBox15";
      this->textBox15->Size = System::Drawing::Size(100, 20);
      this->textBox15->TabIndex = 14;
      // 
      // textBox14
      // 
      this->textBox14->Location = System::Drawing::Point(80, 260);
      this->textBox14->Name = L"textBox14";
      this->textBox14->Size = System::Drawing::Size(100, 20);
      this->textBox14->TabIndex = 13;
      // 
      // textBox13
      // 
      this->textBox13->Location = System::Drawing::Point(270, 20);
      this->textBox13->Name = L"textBox13";
      this->textBox13->Size = System::Drawing::Size(100, 20);
      this->textBox13->TabIndex = 12;
      // 
      // textBox12
      // 
      this->textBox12->Location = System::Drawing::Point(80, 220);
      this->textBox12->Name = L"textBox12";
      this->textBox12->Size = System::Drawing::Size(100, 20);
      this->textBox12->TabIndex = 11;
      // 
      // textBox11
      // 
      this->textBox11->Location = System::Drawing::Point(270, 260);
      this->textBox11->Name = L"textBox11";
      this->textBox11->Size = System::Drawing::Size(100, 20);
      this->textBox11->TabIndex = 10;
      // 
      // textBox10
      // 
      this->textBox10->Location = System::Drawing::Point(270, 220);
      this->textBox10->Name = L"textBox10";
      this->textBox10->Size = System::Drawing::Size(100, 20);
      this->textBox10->TabIndex = 9;
      // 
      // textBox9
      // 
      this->textBox9->Location = System::Drawing::Point(270, 180);
      this->textBox9->Name = L"textBox9";
      this->textBox9->Size = System::Drawing::Size(100, 20);
      this->textBox9->TabIndex = 8;
      // 
      // textBox8
      // 
      this->textBox8->Location = System::Drawing::Point(270, 100);
      this->textBox8->Name = L"textBox8";
      this->textBox8->Size = System::Drawing::Size(100, 20);
      this->textBox8->TabIndex = 7;
      // 
      // textBox7
      // 
      this->textBox7->Location = System::Drawing::Point(270, 140);
      this->textBox7->Name = L"textBox7";
      this->textBox7->Size = System::Drawing::Size(100, 20);
      this->textBox7->TabIndex = 6;
      // 
      // textBox6
      // 
      this->textBox6->Location = System::Drawing::Point(270, 60);
      this->textBox6->Name = L"textBox6";
      this->textBox6->Size = System::Drawing::Size(100, 20);
      this->textBox6->TabIndex = 5;
      // 
      // textBox5
      // 
      this->textBox5->Location = System::Drawing::Point(80, 180);
      this->textBox5->Name = L"textBox5";
      this->textBox5->Size = System::Drawing::Size(100, 20);
      this->textBox5->TabIndex = 4;
      // 
      // textBox4
      // 
      this->textBox4->Location = System::Drawing::Point(80, 140);
      this->textBox4->Name = L"textBox4";
      this->textBox4->Size = System::Drawing::Size(100, 20);
      this->textBox4->TabIndex = 3;
      // 
      // textBox3
      // 
      this->textBox3->Location = System::Drawing::Point(80, 100);
      this->textBox3->Name = L"textBox3";
      this->textBox3->Size = System::Drawing::Size(100, 20);
      this->textBox3->TabIndex = 2;
      // 
      // textBox2
      // 
      this->textBox2->Location = System::Drawing::Point(80, 60);
      this->textBox2->Name = L"textBox2";
      this->textBox2->Size = System::Drawing::Size(100, 20);
      this->textBox2->TabIndex = 1;
      this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
      // 
      // textBox1
      // 
      this->textBox1->Location = System::Drawing::Point(80, 20);
      this->textBox1->Name = L"textBox1";
      this->textBox1->Size = System::Drawing::Size(100, 20);
      this->textBox1->TabIndex = 0;
      this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged_1);
      // 
      // tabControl1
      // 
      this->tabControl1->Controls->Add(this->tabPage1);
      this->tabControl1->Controls->Add(this->tabPage2);
      this->tabControl1->Controls->Add(this->tabPage3);
      this->tabControl1->Controls->Add(this->tabPage5);
      this->tabControl1->Controls->Add(this->tabPage6);
      this->tabControl1->Controls->Add(this->tabPage4);
      this->tabControl1->Controls->Add(this->tabPage7);
      this->tabControl1->Location = System::Drawing::Point(12, 12);
      this->tabControl1->Name = L"tabControl1";
      this->tabControl1->SelectedIndex = 0;
      this->tabControl1->Size = System::Drawing::Size(490, 383);
      this->tabControl1->TabIndex = 0;
      // 
      // tabPage4
      // 
      this->tabPage4->Controls->Add(this->label22);
      this->tabPage4->Controls->Add(this->dataGridView7);
      this->tabPage4->Location = System::Drawing::Point(4, 22);
      this->tabPage4->Name = L"tabPage4";
      this->tabPage4->Size = System::Drawing::Size(482, 357);
      this->tabPage4->TabIndex = 6;
      this->tabPage4->Text = L"2-я форма";
      this->tabPage4->UseVisualStyleBackColor = true;
      // 
      // label22
      // 
      this->label22->AutoSize = true;
      this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label22->Location = System::Drawing::Point(14, 12);
      this->label22->Name = L"label22";
      this->label22->Size = System::Drawing::Size(306, 20);
      this->label22->TabIndex = 9;
      this->label22->Text = L"ЦИКЛЫ 2-ОЙ ФОРМЫ КОЛЕБАНИЙ";
      // 
      // dataGridView7
      // 
      this->dataGridView7->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView7->Location = System::Drawing::Point(18, 44);
      this->dataGridView7->Name = L"dataGridView7";
      this->dataGridView7->Size = System::Drawing::Size(443, 299);
      this->dataGridView7->TabIndex = 8;
      this->dataGridView7->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView7_CellContentClick);
      // 
      // tabPage7
      // 
      this->tabPage7->Controls->Add(this->label23);
      this->tabPage7->Controls->Add(this->dataGridView8);
      this->tabPage7->Location = System::Drawing::Point(4, 22);
      this->tabPage7->Name = L"tabPage7";
      this->tabPage7->Size = System::Drawing::Size(482, 357);
      this->tabPage7->TabIndex = 7;
      this->tabPage7->Text = L"3-я форма";
      this->tabPage7->UseVisualStyleBackColor = true;
      // 
      // label23
      // 
      this->label23->AutoSize = true;
      this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(204)));
      this->label23->Location = System::Drawing::Point(14, 12);
      this->label23->Name = L"label23";
      this->label23->Size = System::Drawing::Size(306, 20);
      this->label23->TabIndex = 9;
      this->label23->Text = L"ЦИКЛЫ 3-ОЙ ФОРМЫ КОЛЕБАНИЙ";
      // 
      // dataGridView8
      // 
      this->dataGridView8->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView8->Location = System::Drawing::Point(18, 44);
      this->dataGridView8->Name = L"dataGridView8";
      this->dataGridView8->Size = System::Drawing::Size(443, 299);
      this->dataGridView8->TabIndex = 8;
      this->dataGridView8->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView8_CellContentClick);
      // 
      // MyForm
      // 
      this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
      this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
      this->ClientSize = System::Drawing::Size(514, 407);
      this->Controls->Add(this->tabControl1);
      this->Name = L"MyForm";
      this->Text = L"MyForm";
      this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
      this->tabPage6->ResumeLayout(false);
      this->tabPage6->PerformLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
      this->tabPage5->ResumeLayout(false);
      this->tabPage5->PerformLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
      this->tabPage3->ResumeLayout(false);
      this->tabPage3->PerformLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
      this->tabPage2->ResumeLayout(false);
      this->tabPage2->PerformLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
      this->tabPage1->ResumeLayout(false);
      this->tabPage1->PerformLayout();
      this->tabControl1->ResumeLayout(false);
      this->tabPage4->ResumeLayout(false);
      this->tabPage4->PerformLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView7))->EndInit();
      this->tabPage7->ResumeLayout(false);
      this->tabPage7->PerformLayout();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView8))->EndInit();
      this->ResumeLayout(false);

    }
#pragma endregion

  public:
  private:
    System::Void MyForm_Load(System::Object^ sender,
      System::EventArgs^ e) {}
  private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void dataGridView3_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {


  }
  private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    ReadInfo();
  }
         int N = 3;

         double** M = new double* [N];
         double** C = new double* [N];
         double** M_1C = new double* [N];
         double* eigen = new double[N];
         double** evec = new double* [N];
         double* freq = new double[N];
         double** B = new double* [N];
         double** S = new double* [N];

  private: System::Void ReadInfo() {
    m = Double::Parse(textBox1->Text);
    J = Double::Parse(textBox2->Text);
    l1 = Double::Parse(textBox3->Text);
    l2 = Double::Parse(textBox4->Text);
    l3 = Double::Parse(textBox5->Text);
    c1 = Double::Parse(textBox12->Text);
    c2 = Double::Parse(textBox14->Text);
    c = Double::Parse(textBox15->Text);
    h1 = Double::Parse(textBox13->Text);
    h2 = Double::Parse(textBox6->Text);
    h = Double::Parse(textBox8->Text);
    k2 = Double::Parse(textBox7->Text);
    k3 = Double::Parse(textBox9->Text);
    a = Double::Parse(textBox10->Text);
    b = Double::Parse(textBox11->Text);
    al = a * PI / 180;
    bet = b * PI / 180;
    for (int i = 0; i < N; i++) S[i] = new double[N];
    for (int i = 0; i < N; i++) evec[i] = new double[N];
    for (int i = 0; i < N; i++) B[i] = new double[N];
    for (int i = 0; i < N; i++) M_1C[i] = new double[N];
    for (int i = 0; i < N; i++) C[i] = new double[N];
    for (int i = 0; i < N; i++) M[i] = new double[N];
  }

  private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

  }
  private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
  }
  private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

    dataGridView1->ColumnCount = 3;
    dataGridView1->RowCount = 3;
    dataGridView2->ColumnCount = 3;
    dataGridView2->RowCount = 3;
    dataGridView3->ColumnCount = 3;
    dataGridView3->RowCount = 3;
    dataGridView4->ColumnCount = 3;
    dataGridView4->RowCount = 3;
    dataGridView5->ColumnCount = 3;
    dataGridView5->RowCount = 5;
    dataGridView6->ColumnCount = 2;
    dataGridView6->RowCount = 20;
    dataGridView7->ColumnCount = 2;
    dataGridView7->RowCount = 20;
    dataGridView8->ColumnCount = 2;
    dataGridView8->RowCount = 20;
    Fill_Matr(M, B, C, S);
    M_1C = MatrixMul(inversion(M, N), C);
    EigVec(M_1C, eigen, evec, freq);
    VecSort(eigen, evec, freq);
    vector<zveno> T = Tsep(M, B, C, S);
    double* job1 = new double[T.size()];
    job1 = Job(T, M, B, C, S, eigen, evec, 0);
    double* job2 = new double[T.size()];
    job2 = Job(T, M, B, C, S, eigen, evec, 1);
    double* job3 = new double[T.size()];
    job3 = Job(T, M, B, C, S, eigen, evec, 2);
    double* per1 = new double[T.size()];
    per1 = JobPercent(T, job1);
    double* per2 = new double[T.size()];
    per2 = JobPercent(T, job2);
    double* per3 = new double[T.size()];
    per3 = JobPercent(T, job3);
    double* CPer1 = new double[20];
    double* CPer2 = new double[20];
    double* CPer3 = new double[20];
    string* Cycles1 = new string[20];
    string* Cycles2 = new string[20];
    string* Cycles3 = new string[20];
    FillCycles(Cycles1);
    FillCycles(Cycles2);
    FillCycles(Cycles3);
    CPer1 = JobCyclePercent(JobCycle(CPer1, job1));
    CPer2 = JobCyclePercent(JobCycle(CPer2, job2));
    CPer3 = JobCyclePercent(JobCycle(CPer3, job3));
    SortSPerCycle(CPer1, Cycles1);
    SortSPerCycle(CPer2, Cycles2);
    SortSPerCycle(CPer3, Cycles3);
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        dataGridView2[j, i]->Value = M[i][j];
      }
    }
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        dataGridView1[j, i]->Value = B[i][j];
      }
    }
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        dataGridView3[j, i]->Value = C[i][j];
      }
    }
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        dataGridView4[j, i]->Value = S[i][j];
      }
    }
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        dataGridView5[j, i + 2]->Value = evec[i][j];
      }
    }
    for (int i = 0; i < 3; i++) {
      dataGridView5[i, 1]->Value = eigen[i];
    }
    for (int i = 0; i < 3; i++) {
      dataGridView5[i, 0]->Value = freq[i];
    }
    for (int i = 0; i < 20; i++) {
      dataGridView6[0, i]->Value = gcnew String(Cycles1[i].c_str());
    }
    for (int i = 0; i < 20; i++) {
      string str = std::to_string(CPer1[i]);
      str += " %";
      dataGridView6[1, i]->Value = gcnew String(str.c_str());
    }
    for (int i = 0; i < 20; i++) {
      dataGridView7[0, i]->Value = gcnew String(Cycles2[i].c_str());
    }
    for (int i = 0; i < 20; i++) {
      string str = std::to_string(CPer2[i]);
      str += " %";
      dataGridView7[1, i]->Value = gcnew String(str.c_str());
    }
    for (int i = 0; i < 20; i++) {
      dataGridView8[0, i]->Value = gcnew String(Cycles3[i].c_str());
    }
    for (int i = 0; i < 20; i++) {
      string str = std::to_string(CPer3[i]);
      str += " %";
      dataGridView8[1, i]->Value = gcnew String(str.c_str());
    }
  }
  private: System::Void dataGridView3_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
  }
  private: System::Void dataGridView4_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
  }
  private: System::Void dataGridView5_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
  }
  private: System::Void dataGridView6_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
  }
  private: System::Void dataGridView7_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
  }
  private: System::Void dataGridView8_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
  }
  private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
  }
  };
}