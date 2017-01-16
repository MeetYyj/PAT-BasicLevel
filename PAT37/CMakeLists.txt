cmake_minimum_required(VERSION 3.6)
project(Pat37)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(Pat37 ${SOURCE_FILES})