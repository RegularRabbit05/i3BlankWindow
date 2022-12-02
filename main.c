#include "raylib.h"

void callback(__attribute__((unused)) int a, __attribute__((unused)) const char * b, __attribute__((unused)) va_list c) {}

int main(void)
{
    SetTraceLogCallback(callback);
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    SetConfigFlags(FLAG_WINDOW_ALWAYS_RUN);
    SetConfigFlags(FLAG_WINDOW_MOUSE_PASSTHROUGH);
    SetConfigFlags(FLAG_WINDOW_TRANSPARENT);
    SetConfigFlags(FLAG_WINDOW_UNDECORATED);
    SetConfigFlags(FLAG_WINDOW_UNFOCUSED);
    InitWindow(1, 1, "blank_window");
    SetTargetFPS(1);
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLANK);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
