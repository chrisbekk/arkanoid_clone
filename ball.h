//
// Created by theownage on 21/03/2026.
//

#ifndef ARKANOID_BALL_H
#define ARKANOID_BALL_H
#include "raylib.h"
typedef struct {
    Vector2 position;
    float radius;
    float speed;
    Color color;
} Ball;

void InitBall(Ball *ball);
void UpdateBall(Ball *ball);
void DrawBall(Ball *ball);

#endif //ARKANOID_BALL_H