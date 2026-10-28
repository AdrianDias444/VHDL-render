#include "header.h"


int main(int argc, char** argv)
{
    InitWindow(1280, 720, "VHDL Render");
    t_gates* gate_manager = parser_file(argv[1]);


	while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);

        draw(gate_manager);
        EndDrawing();
    }
    endProgram();

}

