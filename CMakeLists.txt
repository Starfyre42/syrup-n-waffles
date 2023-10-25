# CMake 3.0
make_minimum_required(VERSION 3.0)

# Project Name
project(syrup-n-waffles)

# Use C++17
set(CMAKE_CXX_STANDARD 17)

# Set Source Directory
set(SRC_DIR src)

# Find all cpp files in source Directory
file(GLOB_RECURSE SRC_FILES ${SRC_DIR}/*.cpp)

# Compiled File Name
add_executable(syrup-n-waffles ${SRC_FILES})

# Output Directory
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/build)

# CXX Droid Android App executable path
#Cxxdroid-binary: build/syrup-n-waffles
