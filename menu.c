#include "game.h" // Include game.h FIRST to get full Game definition
#include "menu.h"
#include "raylib.h"
#include <stdio.h>

void InitMenu(Menu *menu) {
    menu->selectedMenuItem = 0;
    menu->menuButtonsCount = 1;

    MenuButton startButton = {
        .rectangle = {200, 200, 200, 100},
        .color = GREEN,
        .label = "START"
    };

    menu->buttons[0] = startButton;
}

void DrawMenu(Menu *menu) {
    DrawText("SUPER ARKANOID IV", 100, 50, 24, RED);

    for (int i = 0; i < menu->menuButtonsCount; i++) {
        DrawRectangleRec(menu->buttons[i].rectangle, menu->buttons[i].color);
        DrawText(menu->buttons[i].label,
                 menu->buttons[i].rectangle.x + 20,
                 menu->buttons[i].rectangle.y + 40,
                 20,
                 BLACK);
    }
}

void UpdateMenu(Game *game) {
    const Vector2 mousePoint = GetMousePosition();

    for (int i = 0; i < game->menu.menuButtonsCount; i++) {
        const MenuButton *button = &game->menu.buttons[i];
        const bool mouseOver = CheckCollisionPointRec(mousePoint, button->rectangle);

        if (mouseOver && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
            // Example: start the game if start button is pressed
            game->state = STATE_PLAYING;
        }
    }
}
