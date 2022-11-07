cmake_minimum_required(VERSION 3.21)
project(SkipList_C)

set(CMAKE_CXX_STANDARD 17)

add_executable(SkipList_C main.cpp SkipList.h random.h Node.h)
