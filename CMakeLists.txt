cmake_minimum_required(VERSION 3.28.3)
project(Algorithms)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

add_executable(Algorithms main.cpp
        sorting/Sorting.h
        )

target_compile_options(Algorithms PRIVATE
    -Wall
    -Wextra
    -Werror
)
