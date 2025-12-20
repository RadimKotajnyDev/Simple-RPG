cmake_minimum_required(VERSION 4.0)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_executable(untitled
        src/main.cpp
        src/GameItem.cpp
        src/Sword.cpp
        src/Potion.cpp
        include/Potion.h
        src/Entity.cpp
        include/Entity.h
        src/Player.cpp
        include/Player.h
        src/Monster.cpp
        include/Monster.h
        src/ItemFactory.cpp
        include/ItemFactory.h
        src/Wolf.cpp
        include/Wolf.h
        src/Skeleton.cpp
        include/Skeleton.h
        include/TermColors.h
)