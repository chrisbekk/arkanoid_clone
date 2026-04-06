#include "game.h"
#include "player.h"
#include "ball.h"
#include "checkCollisions.h"
#include "menu.h"
#include "level.h"
#include "raylib.h"

void InitGame(Game *game) {
    InitPlayer(&game->player);
    InitBall(&game->ball);
    InitMenu(&game->menu);
    game->state = STATE_MENU;
    game->score = 0;

}

void UpdateGame(Game *game) {
    switch (game->state) {
        case STATE_MENU:
            UpdateMenu(game);
            break;
        case STATE_PLAYING:
            UpdatePlayer(&game->player);
            UpdateBall(&game->ball);
            CheckBallPlayerCollision(&game->ball, &game->player);
            break;
        default:
            break;
    }
}

void DrawGame(Game *game) {
    BeginDrawing();
    ClearBackground(RAYWHITE);

    switch (game->state) {
        case STATE_MENU:
            DrawMenu(&game->menu);
            break;
        case STATE_PLAYING:
            DrawPlayer(&game->player);
            DrawBall(&game->ball);
            break;
        default:
            break;
    }

    EndDrawing();
}
