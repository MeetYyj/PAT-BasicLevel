cmake_minimum_required(VERSION 3.6)
project(PAT47)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(PAT47 ${SOURCE_FILES})