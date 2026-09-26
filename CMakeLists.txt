cmake_minimum_required(VERSION 3.10)

# set the project name
project(strataDB)

# add executables
add_executable(idk src/hello.cpp)

enable_testing()
add_subdirectory(tests/)
