cmake_minimum_required(VERSION 3.0.0)
project(simple-cmake-project VERSION 0.1.0)
set(CMAKE_BUILD_TYPE Debug)


add_library(simple_library STATIC src/ExampleClass.cpp)
target_include_directories(simple_library PUBLIC include)

add_executable(simple_exe main.cpp)
target_link_libraries(simple_exe PRIVATE simple_library)
