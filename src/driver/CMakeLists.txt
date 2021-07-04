cmake_minimum_required(VERSION 3.16)
project(state-machine-src-driver)

set(CMAKE_VERBOSE_MAKEFILE ON)

include_directories(
  ../core
  ../machine
)

add_library(state-machine-src-driver
  driver-machine.cpp
)

target_compile_options(state-machine-src-driver PRIVATE 
  -std=c++20 -stdlib=libstdc++
)

