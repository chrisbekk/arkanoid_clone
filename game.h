#ifndef ARKANOID_GAME_H
#define ARKANOID_GAME_H

#include "raylib.h"
#include "config.h"
#include "player.h"
#include "ball.h"
#include "menu.h"

typedef struct Game {
    enum GameState state;
    Player player;
    Ball ball;
    Menu menu;
    int score;
    int level;
} Game;

void InitGame(Game *game);
void UpdateGame(Game *game);
void DrawGame(Game *game);


#endif //ARKANOID_GAME_H
