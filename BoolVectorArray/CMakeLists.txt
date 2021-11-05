cmake_minimum_required(VERSION 3.16)
project(BoolVectorArray)

set(CMAKE_CXX_STANDARD 14)

add_executable(BoolVectorArray main.cpp BoolMatrix.cpp BoolMatrix.h BoolVector.h BoolVector.cpp)