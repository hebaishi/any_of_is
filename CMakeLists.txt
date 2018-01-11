cmake_minimum_required (VERSION 3.8)

# https://cmake.org/cmake/help/latest/prop_tgt/CXX_STANDARD.html
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(PROJECT_NAME any_of_is)
project (${PROJECT_NAME})
include_directories(.)
add_executable(${PROJECT_NAME} main.cpp)
