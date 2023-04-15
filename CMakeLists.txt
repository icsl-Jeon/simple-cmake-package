cmake_minimum_required(VERSION 3.0.0)
project(simple-package VERSION 0.1.0)
set(CMAKE_BUILD_TYPE Debug)


add_library(first_library STATIC first_library/FirstClass.cpp)
target_include_directories(first_library PUBLIC first_library)

add_library(second_library STATIC second_library/SecondClass.cpp)
target_include_directories(second_library PUBLIC second_library)

add_executable(simple_exe main.cpp)
target_link_libraries(simple_exe PRIVATE first_library second_library)
