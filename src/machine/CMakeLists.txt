cmake_minimum_required(VERSION 3.16)
project(state-machine-src-machine)

set(CMAKE_VERBOSE_MAKEFILE ON)

include_directories(
  ../core
)

add_library(state-machine-src-machine
  machine-factory.cpp
  machine-state.cpp
  machine-transition.cpp
)

target_compile_options(state-machine-src-machine PRIVATE 
  -std=c++20 -stdlib=libstdc++
)

