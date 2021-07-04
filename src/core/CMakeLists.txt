cmake_minimum_required(VERSION 3.16)
project(state-machine-src-core)

set(CMAKE_VERBOSE_MAKEFILE ON)

add_library(state-machine-src-core
  entity-state.cpp
  entity-transition.cpp
  entity-event.cpp
  manager-state.cpp
  manager-transition.cpp
  manager-event.cpp
)

target_compile_options(state-machine-src-core PRIVATE 
  -std=c++20 -stdlib=libstdc++
)

