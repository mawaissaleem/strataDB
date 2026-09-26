cmake_minimum_required(VERSION 3.10)

# set the project name
project(strataDB)

include(FetchContent)
FetchContent_Declare(
    Catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG        v3.4.0
)
FetchContent_MakeAvailable(Catch2)

# add executables
add_executable(add_numbers_test ./test_add_number.cpp ./../src/add_number.cpp)

target_link_libraries(add_numbers_test PRIVATE Catch2::Catch2WithMain)
