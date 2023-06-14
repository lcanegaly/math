#include <iostream>
#include "include/matrix.h"

int main() {
  Matrix2x2 test;
  std::cout << test << "\n"; 
  
  Matrix2x2 out = Scale(test, Vec2(2,2));
  
  Vec2 point = Vec2(4.0, 9.0);
  
  point = out * point;
  
  std::cout << point << "\n"; 
  return 0;
}
