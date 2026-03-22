//
// Created by theownage on 20/03/2026.
//
#include "tools.h"
#include "config.h"
void drawDevTools() {
    DrawRectangle(0, 0, WINDOW_WIDTH, DEV_GUI_HEIGHT, DARKGRAY);
    DrawFPS(OFFSET_X_DEV_GUI_FPS, OFFSET_Y_DEV_GUI);
}