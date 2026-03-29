cmake_minimum_required(VERSION 3.20)
project(seed)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(seed
  src/main.cpp
  src/core/generateFromTemplate.cpp
  src/core/getUserInput.cpp
  src/utils/createProject.cpp
)
