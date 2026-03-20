//
// Created by theownage on 20/03/2026.
//

#ifndef ARKANOID_PLAYER_H
#define ARKANOID_PLAYER_H
#include <raylib.h>

typedef struct {
    Rectangle rect;
    float speed;
    Color color;
} Player;

void initPlayer(Player *player);
void updatePlayer(Player *player);
void drawPlayer(Player *player);

#endif //ARKANOID_PLAYER_H