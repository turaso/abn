cmake_minimum_required(VERSION 3.14)

project(abn LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(abn SHARED
  include/abn/abn.hxx
  include/abn/auto_biographical_numbers.hh
  src/auto_biographical_numbers.cc
)

include_directories(include/)
add_executable(example main.cxx)
target_link_libraries(example abn)
