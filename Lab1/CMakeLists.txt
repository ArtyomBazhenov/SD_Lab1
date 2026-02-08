cmake_minimum_required(VERSION 3.10)
project(Lab1)
message("Current build type is: ${CMAKE_BUILD_TYPE}")

set(CMAKE_CXX_STANGARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_compile_options(-Wall -Wextra)

add_executable(Lab1
    lab1.cpp
    rect.cpp
)
