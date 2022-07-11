cmake_minimum_required(VERSION 3.0)
project(saveallchunks)

set(CMAKE_PREFIX_PATH ../../sdk)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

find_package(ModLoader REQUIRED)

add_library(saveallchunks SHARED src/main.cpp)
target_link_libraries(saveallchunks PUBLIC ModLoader)
