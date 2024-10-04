cmake_minimum_required(VERSION 3.9)
aux_source_directory(. SOURCES)
add_library(CoreSDK STATIC ${SOURCES})
target_include_directories(CoreSDK PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})