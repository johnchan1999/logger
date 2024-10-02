cmake_minimum_required(VERSION 3.9)
project(logger)

set(CMAKE_CXX_STANDARD 11)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)


include_directories(${PROJECT_SOURCE_DIR}/include)

add_subdirectory(src)

message(STATUS "Project source dir : ${PROJECT_SOURCE_DIR}")