cmake_minimum_required(VERSION 3.17)
project(HuffmanEncoding)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(HuffmanEncoding
        HuffmanNode.cpp
        HuffmanNode.h
        mInclude.h)
