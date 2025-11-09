#include "playground.h"
#include <iostream>
#include "raylib.h"
#include "enums/enums.h"

void Playground::start_game() {
    InitWindow(windowWidth, windowHeight, "Kofi's checkers game.");

    // Load font from TTF file
    Font myFont = LoadFontEx("fonts/Caveat-Regular.ttf", 64, NULL, 0);

    // Set the window to be resizable
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);

    while (!WindowShouldClose())
    {
        // Update game logic (e.g., check for key presses to toggle fullscreen)
        if (IsKeyPressed(KEY_F11))
        {
            // Toggle fullscreen mode
            // When using FLAG_WINDOW_RESIZABLE, ToggleFullscreen() works correctly 
            // by adjusting to the current window size or toggling to the desktop resolution
            ToggleFullscreen();
        }

        BeginDrawing();
        ClearBackground(GetThemeColor("ON_BACKGROUND"));
        DrawTextEx(myFont, "Congrats! You created your first window!", (Vector2){100, 200}, 64, 2, GetThemeColor("ON_SURFACE"));
        EndDrawing();
    }

    CloseWindow();
};