cmake_minimum_required(VERSION 3.14)
project(Cryptographer)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCE_FILES
        *.cpp
        *.h
        )

add_executable(Cryptographer ${SOURCE_FILES})