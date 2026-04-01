#include <stdio.h>
#include "raylib.h"
#include "config.h"
#include "game.h"


int main(void) {

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Arkanoid Clone");
    SetTargetFPS(TARGET_FPS);
    Game game;
    InitGame(&game);
    while (!WindowShouldClose())
    {
        UpdateGame(&game);
        DrawGame(&game);
    }

    CloseWindow();
    return 0;
}