#include <raylib.h>

#include "grid.h"

int main()
{
    InitWindow(600, 1200, "Tetris");
    SetTargetFPS(60);

    Grid grid = Grid(GetScreenWidth() / BLOCK_SIZE, GetScreenHeight() / BLOCK_SIZE);

    while (!WindowShouldClose())
    {
        // Update
        
        BeginDrawing();
        ClearBackground(BLACK);

        grid.DrawGrid();

        // Draw

        EndDrawing();
    }

    grid.~Grid();
    CloseWindow();

    return 0;
}