# CMake minimum version
cmake_minimum_required(VERSION 3.20)

# Project name
project({{project_name}})

# Output directory for binaries
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)

# C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Collect source files
file(GLOB_RECURSE SOURCES
    "${PROJECT_SOURCE_DIR}/src/*.cpp"
)

# Create executable
add_executable({{project_name}} ${SOURCES})

# Optional: add definitions for debug/release
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    target_compile_definitions({{project_name}} PRIVATE DEBUG)
endif()

# Optional: link libraries here
# target_link_libraries({{project_name}} <library_name>)
