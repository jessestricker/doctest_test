cmake_minimum_required(VERSION 3.22 FATAL_ERROR)
project(doctest_test
  VERSION 0.1.0
  LANGUAGES CXX)

add_subdirectory(deps/doctest)

add_executable(test src/main.test.cpp)
target_link_libraries(test PRIVATE doctest_with_main)
target_compile_features(test PRIVATE cxx_std_20)
