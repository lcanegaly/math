#ifndef LC_MATH_MATRIX_H
#define LC_MATH_MATRIX_H
#include "vector.h"
#include <iostream>

template<typename T>
struct Type_Mat2x2 {
 
  // TODO - alias instead of typedef? 
  typedef Type_Vec2<T> ColumnType;
  typedef Type_Vec2<T> RowType;

  Type_Mat2x2() {
    data[0] = ColumnType(1, 0);
    data[1] = ColumnType(0, 1);
  }
  Type_Mat2x2(T x1, T y1, T x2, T y2) {
    data[0] = ColumnType(x1, y1);
    data[1] = ColumnType(x2, y2);
  }
  Type_Mat2x2 operator=(const Type_Mat2x2<T>& other) {
    data[0] = other[0];
    data[1] = other[1];
    return *this;
  }
  ColumnType& operator[](std::size_t i){
    return data[i];
  }
 private:
  // Column major ordering
  ColumnType data[2];
};

template<typename T>
struct Type_Mat4x4 {
  typedef Type_Vec4<T> ColumnType;
  typedef Type_Vec4<T> RowType;
  using Col = ColumnType;
  
  Type_Mat4x4() {
    data[0] = Col(1, 0, 0, 0);
    data[1] = Col(0, 1, 0, 0);
    data[2] = Col(0, 0, 1, 0);
    data[3] = Col(0, 0, 0, 1);
  }
  Type_Mat4x4(Col x, Col y, Col z, Col w) {
    data[0] = x; 
    data[1] = y; 
    data[2] = z; 
    data[3] = w; 
  }
  Type_Mat4x4 operator=(const Type_Mat4x4<T>& other) {
    data[0] = other[0];
    data[1] = other[1];
    data[2] = other[0];
    data[3] = other[0];
    return *this;
  }
  ColumnType& operator[](std::size_t i){
    return data[i];
  }
 private:
  // Column major ordering
  ColumnType data[4];
};

typedef Type_Mat2x2<float> Matrix2x2;

template<typename T>
std::ostream& operator<<(std::ostream& os, Type_Mat2x2<T>& m){
    os << m[0] << m[1] << "\n";
    return os;
}

#endif
