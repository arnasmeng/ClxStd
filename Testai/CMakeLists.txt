# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

add_executable(t001_Logger "t001_Logger.cpp")


include_directories("../src/Logger")

target_link_libraries(t001_Logger PUBLIC ProClxLib )

set_property(TARGET t001_Logger PROPERTY CXX_STANDARD 17)