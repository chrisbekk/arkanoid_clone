//
// Created by theownage on 21/03/2026.
//
#include "raylib.h"
#include "game.h"
#include "player.h"
#include "ball.h"
#include "menu.h"
void InitGame(Game *game) {
    Player player;
    Ball ball;
    initPlayer(&player);
    initBall(&ball);
    InitMenu(&game->menu);
    game->state = STATE_MENU;
    game->player = player;
    game->ball = ball;
    game->score = 0;
    game->level = 0;

}

void UpdateGame(Game *game) {
    switch (game->state) {
        case STATE_MENU:
            break;
        case STATE_PLAYING:
            break;
        case STATE_PAUSED:
            break;
        case STATE_LEVEL_CLEAR:
            break;
        case STATE_GAME_OVER:
            break;
    }
}

void DrawGame(Game *game) {
    BeginDrawing();
    switch (game->state)
    {
        case STATE_MENU:
            DrawMenu(&game->menu);
            break;

        case STATE_PLAYING:

            break;

        case STATE_PAUSED:

            break;

        case STATE_GAME_OVER:

            break;
    };
    EndDrawing();
}