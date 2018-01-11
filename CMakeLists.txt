cmake_minimum_required (VERSION 2.6)

# https://cmake.org/cmake/help/latest/prop_tgt/CXX_STANDARD.html
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CXX g++-7)
set(CC gcc-7)

set(PROJECT_NAME any_of_is)
project (${PROJECT_NAME})
include_directories(.)
add_executable(${PROJECT_NAME} main.cpp)
