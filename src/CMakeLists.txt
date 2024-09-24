# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)
project(
    ClxStdLib
)



add_library(ProClxLib "Logger/ClxStd_Logger.cpp" "Logger/ClxStd_Logger.h")
