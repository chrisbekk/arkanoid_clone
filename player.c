//
// Created by theownage on 20/03/2026.
//
#include <stdio.h>
#include "player.h"
#include "config.h"
#include "raylib.h"


void InitPlayer(Player *player) {
    unsigned int playerStartingX = (WINDOW_WIDTH / 2) - (PLAYER_WIDTH / 2);
    player->rect.x = playerStartingX;
    player->rect.y = WINDOW_HEIGHT - PLAYER_DEFAULT_Y_OFFSET;
    player->rect.width = PLAYER_WIDTH;
    player->rect.height = PLAYER_HEIGHT;
    player->speed = PLAYER_SPEED;
    player->color = PLAYER_COLOR;
}

void UpdatePlayer(Player *player) {
    float dt = GetFrameTime();
    player->speed = PLAYER_SPEED;

    if (IsKeyDown(KEY_UP)) {
        player->rect.y -= player->speed * dt;
        if (player->rect.y < PLAYER_UPPER_BOUND) {
            player->rect.y = PLAYER_UPPER_BOUND;
        }
    }

    if (IsKeyDown(KEY_DOWN)) {
        player->rect.y += player->speed * dt;
        if (player->rect.y + player->rect.height > WINDOW_HEIGHT ) {
            player->rect.y = WINDOW_HEIGHT - player->rect.height;
        }
    }

    if (IsKeyDown(KEY_LEFT)) {
        player->rect.x -= player->speed * dt;
        if (player->rect.x < 0 ) {
            player->rect.x = 0;
        }
        printf("PRESSED\n");
    }

    if (IsKeyDown(KEY_RIGHT)) {
        player->rect.x += player->speed * dt;
        if (player->rect.x + player->rect.width > WINDOW_WIDTH ) {
            player->rect.x = WINDOW_WIDTH - player->rect.width;
        }
        printf("PRESSED\n");
    }

}

void DrawPlayer(Player *player) {
    DrawRectangleRec(player->rect, player->color);
}
