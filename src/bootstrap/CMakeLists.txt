cmake_minimum_required(VERSION 3.16)
project(state-machine-src-bootstrap)

set(CMAKE_VERBOSE_MAKEFILE ON)

include_directories(
  ../core
  ../machine
)

add_library(state-machine-src-bootstrap
  bootstrap-state-transition.cpp
)

target_compile_options(state-machine-src-bootstrap PRIVATE 
  -std=c++20 -stdlib=libstdc++
)

