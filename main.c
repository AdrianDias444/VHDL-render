#include "header.h"

void draw_normal_text(char* text, int pos_x, int pos_y, Color color)
{
    int fontsize;

    fontsize = 36;
    DrawText(text, pos_x, pos_y, fontsize, color);
}

void draw_image(Texture2D image, int pos_x, int pos_y)
{
    Color color;

    color = BLACK;
    DrawTexture(image, pos_x, pos_y, color);
}




// DARKGRAY color
Texture2D load_texture()
{
    Texture2D and = LoadTexture("and.png");
    
    return (and);
}




void endProgram()
{
    CloseWindow();
    exit(1);
}

int main()
{
    InitWindow(1280, 720, "VHDL Render");
    while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(DARKGRAY);
        draw_normal_text("Example", 100, 50, BLACK);


        draw_image(load_texture(), 0, 50);
        EndDrawing();
    }
    endProgram();

}
