//
// Created by theownage on 21/03/2026.
//

#ifndef ARKANOID_MENU_H
#define ARKANOID_MENU_H


#include "raylib.h"
struct Game;
#define MAX_BUTTONS 10

typedef struct {
    Rectangle rectangle;
    Color color;
    char label[20];
} MenuButton;

typedef struct {
    int selectedMenuItem;
    MenuButton buttons[MAX_BUTTONS];
} Menu;



void InitMenu(Menu *menu);
void DrawMenu(Menu *menu);
void UpdateMenu(struct Game *game);

#endif //ARKANOID_MENU_H