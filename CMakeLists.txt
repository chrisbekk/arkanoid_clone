cmake_minimum_required(VERSION 4.0)
project(arkanoid C)

set(CMAKE_C_STANDARD 11)
find_package(raylib REQUIRED)
add_executable(arkanoid main.c
        player.h
        player.c
        utils.h
        utils.c
        config.h
        tools.h
        tools.c
        game.c
        game.h
        ball.h
        ball.c
        menu.h
        menu.c
        level.h
        level.c
        block.h
        block.c
        checkCollisions.c
        checkCollisions.h
)
target_link_libraries(arkanoid raylib)