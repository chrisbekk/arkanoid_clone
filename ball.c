//
// Created by theownage on 21/03/2026.
//

#include "ball.h"
#include "config.h"

void InitBall(Ball *ball) {
    ball->position.x = BALL_STARTING_X_POS;
    ball->position.y = BALL_STARTING_Y_POS;
    ball->velocity.x = BALL_SPEED;
    ball->velocity.y = BALL_SPEED;
    ball->radius = BALL_RADIUS;
    ball->color = BALL_COLOR;


}

void UpdateBall(Ball *ball) {
    const float dt = GetFrameTime();
    ball->position.x += ball->velocity.x * dt;
    ball->position.y += ball->velocity.y * dt;

    // LEFT WALL COLLISION
    if (ball->position.x - ball->radius < 0) {
        ball->position.x = ball->radius;
        ball->velocity.x *= -1;
    }
    // RIGHT WALL COLLISION
    if (ball->position.x + ball->radius > WINDOW_WIDTH) {
        ball->position.x = WINDOW_WIDTH - ball->radius;
        ball->velocity.x *= -1;
    }
    // TOP WALL COLLISION
    if (ball->position.y - ball->radius < 0) {
        ball->position.y = ball->radius;
        ball->velocity.y *= -1;
    }
    // BOTTOM WALL COLLISION
    if (ball->position.y + ball->radius > WINDOW_HEIGHT) {
        ball->position.y = WINDOW_HEIGHT - ball->radius;
        ball->velocity.y *= -1;
    }
}

void DrawBall(Ball *ball) {
    DrawCircle(ball->position.x, ball->position.y, ball->radius, ball->color);
}