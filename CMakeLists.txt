cmake_minimum_required(VERSION 4.0)
project(arkanoid C)

set(CMAKE_C_STANDARD 11)
find_package(raylib REQUIRED)
add_executable(arkanoid main.c
        player.h
        player.c
        utils.h
        utils.c
        config.h)
target_link_libraries(arkanoid raylib)