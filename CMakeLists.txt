cmake_minimum_required(VERSION 3.21)
project(naloga0601)

set(CMAKE_CXX_STANDARD 14)

add_executable(naloga0601 main.cpp PrintUtility.h PrintUtility.cpp ColorCode.h Graph.cpp Graph.h VerticalPictograph.cpp VerticalPictograph.h HorizontalPictograph.cpp HorizontalPictograph.h)
