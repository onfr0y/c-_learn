cmake_minimum_required(VERSION 4.2)
project(C___Studdy)

set(CMAKE_CXX_STANDARD 20)

# Main learning file in the root
add_executable(learncpp learncpp.cpp)

# Moved C++ learning/practice files in the "Learn cpp" directory
add_executable(C___Studdy "Learn cpp/main.cpp")
add_executable(practice "Learn cpp/practice.cpp")
add_executable(chapter2 "Learn cpp/m-chapter2.cpp")
add_executable(class&object "Learn cpp/class&object.cpp")
add_executable(vector_study "Learn cpp/vector_study.cpp")
add_executable(advance_cpp "Learn cpp/AdvanceC++.cpp")
add_executable(oop "Learn cpp/OOP.cpp")
add_executable(searchArray "Learn cpp/searchArray.cpp")
add_executable(chapter 13 "13.cpp")