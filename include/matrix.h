#ifndef LC_MATH_MATRIX_H
#define LC_MATH_MATRIX_H
#include "vector.h"
#include <iostream>

struct Matrix2x2 {
  Vec2 ab_;
  Vec2 cd_;
  
  Vec2 operator*(Vec2 vector) {
    Vec2 result;
    result.x = ab_.x * vector.x + ab_.y * vector.y; 
    result.y = cd_.x * vector.x + cd_.y * vector.y; 
    return result;
  }
  Matrix2x2 operator=(const Matrix2x2& other) {
    ab_ = other.ab_;
    cd_ = other.cd_;
    return *this;
  }
};

std::ostream& operator<<(std::ostream& os, const Matrix2x2& m){
    os << m.ab_  << m.cd_ << "\n";
    return os;
}

Matrix2x2 Translate(Matrix2x2 m, Vec2 vector) {
  Matrix2x2 result;
  result.ab_ = m.ab_ + Vec2(vector.x, vector.x);
  result.cd_ = m.cd_ + Vec2(vector.y, vector.y);
  return result;
} 

Matrix2x2 Scale(Matrix2x2 m, Vec2 vector) {
  Matrix2x2 result = m;
  result.ab_.x = vector.x;
  result.cd_.y = vector.y;
  return result;
} 

#endif
