cmake_minimum_required(VERSION 3.14)
project(beef-interop-chost)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} beef-interop-clib)
target_include_directories(${PROJECT_NAME} PRIVATE ${CLIB_INCLUDES})

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/beef-interop-lib.dll DESTINATION ${CMAKE_CURRENT_BINARY_DIR})