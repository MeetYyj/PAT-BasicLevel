cmake_minimum_required(VERSION 3.6)
project(PAT57)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(PAT57 ${SOURCE_FILES})