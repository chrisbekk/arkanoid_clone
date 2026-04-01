//
// Created by theownage on 25/03/2026.
//

#ifndef ARKANOID_LEVEL_H
#define ARKANOID_LEVEL_H
#include "game.h"
#include "config.h"

typedef struct {
    int level_grid[LEVEL_ROWS][LEVEL_COLUMNS];
} Level;

void InitLevel (Game *game);
void DrawLevel(Game *game);
void UpdateLevel(Game *game);
void LoadLevel(Game *game);

#endif //ARKANOID_LEVEL_H