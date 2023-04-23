cmake_minimum_required(VERSION 3.10)

set(PROJECT_NAME "lc-math")
set(CMAKE_CXX_STANDARD 20)

project(${PROJECT_NAME})

include_directories(include)

add_library(${PROJECT_NAME} STATIC
  src/math.cpp
  include/vector.h
  )
