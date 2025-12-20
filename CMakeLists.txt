cmake_minimum_required(VERSION 3.20)
project(SimpleRPG)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE SOURCES "src/*.cpp" "src/*.h")

add_executable(SimpleRPG ${SOURCES}
        main.cpp
        src/Entities/Monsters/Spawner.cpp
        src/Entities/Monsters/Spawner.h)

target_include_directories(SimpleRPG PRIVATE src)