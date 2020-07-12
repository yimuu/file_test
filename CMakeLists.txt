cmake_minimum_required(VERSION 3.16)
project(file_test)

set(CMAKE_CXX_STANDARD 14)

include_directories("G:/Programs/C/in")

link_directories("G:/Programs/C/in/cmake-build-debug")

add_executable(file_test main.cpp test.h test.cpp)

target_link_libraries(file_test "libin.a")