//
// Created by theownage on 25/03/2026.
//

#ifndef ARKANOID_BLOCK_H
#define ARKANOID_BLOCK_H

#include "raylib.h"

enum BLOCK_TYPE{
    BLOCK_EMPTY,
    BLOCK_NORMAL,
    BLOCK_MEDIUM,
    BLOCK_STRONG,
};

typedef struct {
    enum BLOCK_TYPE type;
    Color color;
    int hp;
} Block;

void InitBlock(Block *block);

void DrawBlock(Block *block, int x, int y);

#endif //ARKANOID_BLOCK_H