#pragma once
#include <iostream>
#include <string>

struct zveno {
  int x, y;
  std::string type;
  zveno() {
    x = 0;
    y = 0;
    type = "";
  }
  zveno(int _x1, int _x2, std::string tmp) : x(_x1), y(_x2), type(tmp) {}

  friend bool operator==(const zveno& a, const zveno& b) {
    return (a.x == b.x) && (a.y == b.y) && (a.type == b.type);
  }
};