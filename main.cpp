#include "raylib.h"

int main()
{

    int windowDimensions[2] = {384, 384};
    InitWindow(windowDimensions[0], windowDimensions[1], "Clash Classy");

    Texture2D maptexture = LoadTexture("TileWorld.png");
    Vector2 mapPos{0.0, 0.0};

    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();

        DrawTextureEx(maptexture, mapPos, 0.0, 4.0, WHITE);

        EndDrawing();
    }

    UnloadTexture(maptexture);
    CloseWindow();
    return 0;
}