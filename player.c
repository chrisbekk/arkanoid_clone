//
// Created by theownage on 20/03/2026.
//
#include <stdio.h>
#include "player.h"
#include "raylib.h"


void InitPlayer(Player *player) {
    player->position.x = PLAYER_STARTING_X_POS;
    player->position.y =  PLAYER_DEFAULT_Y_OFFSET;
    player->velocity.x = 0;
    player->velocity.y = 0;
    player->width = PLAYER_WIDTH;
    player->height = PLAYER_HEIGHT;
    player->color = PLAYER_COLOR;
}

void UpdatePlayer(Player *player) {
    float dt = GetFrameTime();


    if (IsKeyDown(KEY_UP)) {
        player->position.y -= PLAYER_SPEED * dt;
        if (player->position.y < PLAYER_UPPER_BOUND) {
            player->position.y = PLAYER_UPPER_BOUND;
        }
    }

    if (IsKeyDown(KEY_DOWN)) {
        player->position.y += PLAYER_SPEED * dt;
        if (player->position.y + player->height > WINDOW_HEIGHT ) {
            player->position.y = WINDOW_HEIGHT - player->height;
        }
    }

    if (IsKeyDown(KEY_LEFT)) {
        player->position.x -= PLAYER_SPEED * dt;
        if (player->position.x < 0 ) {
            player->position.x = 0;
        }
        printf("PRESSED\n");
    }

    if (IsKeyDown(KEY_RIGHT)) {
        player->position.x += PLAYER_SPEED * dt;
        if (player->position.x + player->width > WINDOW_WIDTH ) {
            player->position.x = WINDOW_WIDTH - player->width;
        }
        printf("PRESSED\n");
    }

}

void DrawPlayer(Player *player) {
    DrawRectangle(player->position.x, player->position.y, player->width, player->height, player->color);
}
