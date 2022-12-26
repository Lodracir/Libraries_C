cmake_minimum_required(VERSION 3.23)
project(CircularBuffer C)

set(CMAKE_C_STANDARD 99)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(CircularBuffer main.c CircularBuffer.c CircularBuffer.h)
