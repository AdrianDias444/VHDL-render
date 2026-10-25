#include "header.h"


int main(int argc, char** argv)
{
    InitWindow(1280, 720, "VHDL Render");
    t_gates* gate_manager = parser_file(argv[1]);
    
	Vector2 start;
	Vector2 end;
	t_node* input1;
	t_node* input2;

	start.x = 30;
	start.y = 30;

	end.x = 30;
	end.y = 120;

	input1 = alloc_node(start);
	input2 = alloc_node(end);

	while(!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLACK);

        draw_and_gate(input1, input2);
        EndDrawing();
    }
    endProgram();

}

