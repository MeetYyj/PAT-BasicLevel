cmake_minimum_required(VERSION 3.6)
project(PAT44)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(PAT44 ${SOURCE_FILES})