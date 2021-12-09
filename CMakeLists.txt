cmake_minimum_required(VERSION 3.1)
project(fibonacci_sum)

set(CMAKE_CXX_STANDARD 17)
set(FIRST_VERSION_MAJOR 1)
set(FIRST_VERSION "${FIRST_VERSION_MAJOR}")
add_executable(fibonacci_sum main.cpp parse.cpp)
