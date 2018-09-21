cmake_minimum_required(VERSION 3.12)
project(cainiao_cpp_examples)
set(CMAKE_CXX_STANDARD 14)

add_executable(0-helloworld 0-helloworld.cpp 0-join_str.cpp)
add_executable(1-data_type 1-data_type.cpp)
add_executable(2-variable 2-variable.cpp)
add_executable(3-variable_scope 3-variable_scope.cpp)
add_executable(4-constant 4-constant.cpp)
add_executable(5-modifier_type 5-modifier_type.cpp)
add_executable(6-storage_class 6-storage_class.cpp)
add_executable(7-operator 7-operator.cpp)
add_executable(8-loop 8-loop.cpp)
add_executable(9-judgment 9-judgment.cpp)
add_executable(10-function 10-function.cpp)
add_executable(11-numbers 11-numbers.cpp)
add_executable(12-array 12-array.cpp)
add_executable(13-string 13-string.cpp)
add_executable(15-reference 15-reference.cpp)
add_executable(16-date_time 16-date_time.cpp)
add_executable(17-io 17-io.cpp)
add_executable(18-struct 18-struct.cpp)


add_subdirectory(pointer)



