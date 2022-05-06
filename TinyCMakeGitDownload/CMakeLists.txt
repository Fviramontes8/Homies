cmake_minimum_required(VERSION 3.14)
project(HelloWorld LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
	fmt
	GIT_REPOSITORY https://github.com/fmtlib/fmt.git
	GIT_TAG 5.3.0)
FetchContent_MakeAvailable(fmt)

add_executable(hello_world hello_fmt.cpp)
target_link_libraries(hello_world PRIVATE fmt::fmt)
target_compile_features(hello_world PRIVATE cxx_std_20)
