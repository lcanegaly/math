#ifndef LC_MATH_VECTOR_H
#define LC_MATH_VECTOR_H
#include <iostream>
// A basic 2 component vector type
template<typename T>
struct Type_Vec2 {
  Type_Vec2(T x, T y): x{x}, y{y}{}
  Type_Vec2(): x{0}, y{0}{}

  Type_Vec2 operator-(const Type_Vec2& other){
    return Type_Vec2{x - other.x, y - other.y};
  }  
  Type_Vec2 operator=(const Type_Vec2& other) {
    x = other.x;
    y = other.y;
    return Type_Vec2(x,y); 
  }
  Type_Vec2 operator+(const Type_Vec2& other) {
    x += other.x;
    y += other.y;
    return Type_Vec2(x,y);
  }
  T x;
  T y;
};

template<typename T>
std::ostream& operator<<(std::ostream& os, const Type_Vec2<T>& v){
    os << v.x << "," << v.y << "\n";
    return os;
}

// Floating point and Int vector types
typedef float FloatType;
typedef Type_Vec2<FloatType> Vec2;

typedef int IntType;
typedef Type_Vec2<IntType> IVec2;

#endif
