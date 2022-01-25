cmake_minimum_required(VERSION 3.16.3)

project(
   tst_Solution.out
   VERSION 0.1
)

SET(CMAKE_CXX_STANDARD 14)
SET(CMAKE_CXX_STANDARD_REQUIRED True)

add_definitions(
   -g
   -std=c++11
   -Wall
   -Werror
   -Wextra
   -pedantic
   -Wuninitialized
)

add_executable(
   tst_Solution.out
   ./src/Solution.cpp
   ./tst/tst_Solution.cpp
)

target_include_directories(
   tst_Solution.out PUBLIC
   "${PROJECT_BINARY_DIR}"
   "${PROJECT_SOURCE_DIR}/inc"
)

