//
// Created by theownage on 21/03/2026.
//
#include "config.h"
#include "menu.h"
#include "raylib.h"
#include <stdio.h>
void InitMenu(Menu *menu) {
    menu->selectedMenuItem = 0;

    MenuButton startButton = {
        .rectangle = {0, 0, 200, 100},
        .color = GREEN,
        .label = "START"
    };
    menu->buttons[0] = startButton;
    printf("Start Menu");
}

void DrawMenu(Menu *menu) {
    DrawText("SUPER ARKANOID IV", TITLE_SCREEN_X, TITLE_SCREEN_Y, 24, RED);

    for (int i = 0; i < MAX_BUTTONS; i++) {
        DrawRectangle(menu->buttons[i].rectangle.x, menu->buttons[i].rectangle.y, menu->buttons[i].rectangle.width, menu->buttons[i].rectangle.height, menu->buttons[i].color);
    }
}
void UpdateMenu(struct Game *game){}