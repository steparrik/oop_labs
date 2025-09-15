cmake_minimum_required(VERSION 3.14)
project(Lab1)

include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.14.0
)

FetchContent_MakeAvailable(googletest)

add_executable(oop_lab_1 oop_lab_1.cpp)

add_executable(tests oop_lab_1_test.cpp)
target_link_libraries(tests gtest gtest_main pthread)

target_include_directories(tests PRIVATE ${gtest_SOURCE_DIR}/include)