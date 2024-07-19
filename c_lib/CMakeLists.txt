cmake_minimum_required(VERSION 3.14)
project(beef-interop-clib)

add_library(${PROJECT_NAME} lib.cpp)

set(CLIB_INCLUDES ${CMAKE_CURRENT_SOURCE_DIR} CACHE INTERNAL "")