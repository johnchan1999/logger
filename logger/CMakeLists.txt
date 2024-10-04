cmake_minimum_required(VERSION 3.9)
project(logger)

set(CMAKE_CXX_STANDARD 20)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)


include_directories(${PROJECT_SOURCE_DIR}/include)

add_subdirectory(src)

find_package(nlohmann_json REQUIRED)
#find_package(log4cpp REQUIRED)
find_library(LOG4CPP_LIB log4cpp REQUIRED)
message("${LOG4CPP_LIB}")

add_executable(logger src/main.cpp)

target_link_libraries(logger CoreSDK ${LOG4CPP_LIB} nlohmann_json::nlohmann_json)

message(STATUS "Project source dir : ${PROJECT_SOURCE_DIR}")