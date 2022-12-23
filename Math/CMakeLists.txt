cmake_minimum_required(VERSION 3.0)
project(MATH)

set(CMAKE_C_STANDARD 99)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(MATH main.c MathC.c MathC.h)