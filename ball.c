//
// Created by theownage on 21/03/2026.
//

#include "ball.h"
#include "config.h"

void InitBall(Ball *ball) {
    ball->position.x = BALL_STARTING_X_POS;
    ball->position.y = BALL_STARTING_Y_POS;

    ball->radius = BALL_RADIUS;
    ball->color = BALL_COLOR;
    ball->speed = BALL_SPEED;

}

void UpdateBall(Ball *ball) {
    ball->position.x += ball->speed * GetFrameTime();
    ball->position.y += ball->speed * GetFrameTime();
}

void DrawBall(Ball *ball) {
    DrawCircle(ball->position.x, ball->position.y, ball->radius, ball->color);
}