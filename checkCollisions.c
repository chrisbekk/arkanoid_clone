//
// Created by theownage on 06/04/2026.
//
#include <math.h>
#include "raylib.h"
#include "checkCollisions.h"
void CheckBallPlayerCollision(Ball *ball, Player *player) {
    Rectangle playerRect = {
        player->position.x,
        player->position.y,
        player->width,
        player->height
    };

    if (ball->velocity.y > 0 &&
        CheckCollisionCircleRec(ball->position, ball->radius, playerRect)) {

        ball->position.y = playerRect.y - ball->radius;

        float paddleCenter = player->position.x + player->width / 2.0f;
        float hitOffset = ball->position.x - paddleCenter;
        float normalized = hitOffset / (player->width / 2.0f);

        ball->velocity.y = -fabsf(ball->velocity.y);
        ball->velocity.x = normalized * BALL_SPEED;
        }
}
