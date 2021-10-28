cmake_minimum_required(VERSION 3.15)

project(lw2)
set(CMAKE_CXX_STANDARD 20)

add_library(coin SHARED coin.cpp)

add_executable(lw2 main.cpp)

target_link_libraries(lw2 coin)
