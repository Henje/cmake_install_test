cmake_minimum_required(VERSION 3.11)

project(install_test)

add_library(itest src/test.cpp)
target_include_directories(itest PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:lib/itest>)
set_target_properties(itest PROPERTIES PUBLIC_HEADER ${CMAKE_CURRENT_SOURCE_DIR}/include/test.hpp)

install(TARGETS itest EXPORT itest DESTINATION "lib/itest" PUBLIC_HEADER)
install(EXPORT itest DESTINATION "lib/itest" FILE itest-config.cmake)
