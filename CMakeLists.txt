cmake_minimum_required(VERSION 3.10)
project(Flexer VERSION 1.0)
add_executable(flexer src/flexer.c)
install(TARGETS flexer DESTINATION ${CMAKE_INSTALL_PREFIX/bin/})
