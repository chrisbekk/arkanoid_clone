//
// Created by theownage on 20/03/2026.
//
#include "utils.h"
#include "config.h"
void drawPlayerBoundary() {
    unsigned int playerYBoundary = PLAYER_UPPER_BOUND; // Window height minus the player boundary
    DrawLine(0, playerYBoundary, WINDOW_WIDTH, playerYBoundary, RED);
}