cmake_minimum_required(VERSION 3.25)
project(Elysio)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(OUTPUT_DIR ${CMAKE_SOURCE_DIR}/bin)
set(INT_DIR ${CMAKE_SOURCE_DIR}/bin-int)

add_subdirectory(Elysio)
add_subdirectory(Sandbox)

