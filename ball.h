//
// Created by theownage on 21/03/2026.
//

#ifndef ARKANOID_BALL_H
#define ARKANOID_BALL_H

typedef struct {
    int x;
    int y;
    float speed;
} Ball;

void initBall(Ball *ball);

#endif //ARKANOID_BALL_H