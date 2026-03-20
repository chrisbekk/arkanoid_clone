#include <stdio.h>
#include "raylib.h"
#include "config.h"
#include "player.h"
#include "utils.h"



int main(void) {

    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Arkanoid Clone");
    SetTargetFPS(TARGET_FPS);
    Player player;
    initPlayer(&player);
    while (!WindowShouldClose())
    {
        // INPUT + UPDATE
        updatePlayer(&player);
        // DRAW

        BeginDrawing();
        ClearBackground(RAYWHITE);
        drawPlayerBoundary();
        drawPlayer(&player);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}