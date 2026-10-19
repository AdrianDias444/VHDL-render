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


int main(int argc, char** argv)
{
    InitWindow(1280, 720, "VHDL Render");

    Texture2D texture = load_texture();
    t_gates* gate_manager = parser_file(argv[1]);


	char* and;
	and = ft_strjoin("and gates: ", ft_itoa(gate_manager -> and_gates));
	char* or;
	or = ft_strjoin("or gates: ", ft_itoa(gate_manager -> or_gates));
	char* not;
	not = ft_strjoin("not gates", ft_itoa(gate_manager -> not_gates));


	while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(DARKGRAY);
        

        draw_normal_text(and, 300, 150, BLACK);
        draw_normal_text(or, 300, 200, BLACK);
        draw_normal_text(not, 300, 250, BLACK);


        draw_image(load_texture(), 0, 50);
        EndDrawing();
    }
    endProgram();

}

