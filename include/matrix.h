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

typedef Type_Mat2x2<float> Matrix2x2;

template<typename T>
std::ostream& operator<<(std::ostream& os, Type_Mat2x2<T>& m){
    os << m[0] << m[1] << "\n";
    return os;
}

#endif
