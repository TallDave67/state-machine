cmake_minimum_required(VERSION 3.16)
project(state-machine-src)

set(CMAKE_VERBOSE_MAKEFILE ON)

add_subdirectory(bootstrap)
add_subdirectory(core)
add_subdirectory(driver)
add_subdirectory(machine)
include_directories(
  bootstrap
  core
  driver
  machine
)

add_library(state-machine-src
  src_main.cpp
)

target_compile_options(state-machine-src PRIVATE 
  -std=c++20 -stdlib=libstdc++
)

target_link_libraries(state-machine-src
  state-machine-src-bootstrap
  state-machine-src-core
  state-machine-src-driver
  state-machine-src-machine
)
