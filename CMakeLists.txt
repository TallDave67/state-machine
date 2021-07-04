cmake_minimum_required(VERSION 3.16)
project(state-machine)

set(CMAKE_VERBOSE_MAKEFILE ON)

add_subdirectory(src)
include_directories(
  src
  src/bootstrap
  src/core
  src/driver
  src/machine
)

add_executable(state-machine
  main.cpp
)

target_compile_options(state-machine PRIVATE 
  -std=c++20 -stdlib=libstdc++
)

target_link_libraries(state-machine state-machine-src)
