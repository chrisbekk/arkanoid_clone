//
// Created by theownage on 30/03/2026.
//
#include "collision.h"

#include <stdio.h>

void checkCollision(Game *game) {
    if (game->ball.position.x < 0) {
        game->ball.speed = -1;
    }
    if ( game->ball.position.y > WINDOW_HEIGHT) {
        game->ball.speed = -1;

    }

}
