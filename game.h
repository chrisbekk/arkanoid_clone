//
// Created by theownage on 21/03/2026.
//

#ifndef ARKANOID_GAME_H
#define ARKANOID_GAME_H
#include "config.h"
#include "menu.h"
#include "player.h"
#include "ball.h"

typedef struct {
    enum GameState state;
    Menu menu;
    Player player;
    Ball ball;
    int score;
    int level;
}  Game;

void InitGame(Game *game);
void UpdateGame(Game *game);
void DrawGame(Game *game);


#endif //ARKANOID_GAME_H