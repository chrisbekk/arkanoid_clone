#ifndef ARKANOID_MENU_H
#define ARKANOID_MENU_H

#include "raylib.h"

#define MAX_BUTTONS 10

typedef struct {
    Rectangle rectangle;
    Color color;
    char label[20];
} MenuButton;

typedef struct {
    int selectedMenuItem;
    int menuButtonsCount;
    MenuButton buttons[MAX_BUTTONS];
} Menu;

typedef struct Game Game;

void InitMenu(Menu *menu);
void DrawMenu(Menu *menu);
void UpdateMenu(Game *game);
#endif //ARKANOID_MENU_H
