#include "../../header.h"


t_and2* draw_and_gate(t_node* input1, t_node* input2)
{
    Vector2 start;
    Vector2 end;
    float   thick;
    float   radius;
    t_and2* and;
	t_node* output;

	// Caso algum dos inputs esteja muito proxima das extremidades
	if(input1->vector.y < 30 || input2->vector.y < 30)
		return(NULL);
	// Caso os inputs comecem em abcissas diferentes
	// Implementar inputs com diferentes abcissas
	if(input1->vector.x != input2->vector.x)
		return(NULL);
	// Caso esteja invertido as entradas
	// Implementar Logica para inversao.
	if(input1->vector.y > input2->vector.y)
		return(NULL);
    and = alloc_and2();

    thick = 5;
    radius = 0.5* (input2->vector.y - input1->vector.y) + 17;

//------------------
    and->input1 = input1;

    end.x = input1->vector.x + 70;
    end.y = input1->vector.y;

    f_DrawLineEx(input1->vector, end, 5, WHITE);
//------------------
    and->input2 = input2;

    end.x = input2->vector.x + 70;
    end.y = input2->vector.y;
    f_DrawLineEx(input2->vector, end, 5, WHITE);

//-------------------
    start.x = input1->vector.x + 70;
    start.y = input1->vector.y - 20;

    end.x = input1->vector.x + 70;
    end.y = input2->vector.y + 20;

    f_DrawLineEx(start, end, 5, WHITE);


//---------------
    start.x = input1->vector.x + 70;
    start.y = input1->vector.y - 20;

    end.x = input1->vector.x + 130;
    end.y = input1->vector.y - 20;

    f_DrawLineEx(start, end, 5, WHITE);


    start.x = input2->vector.x  + 70;
    start.y = input2->vector.y + 20;

    end.x = input2->vector.x  + 130;
    end.y = input2->vector.y + 20;

    f_DrawLineEx(start, end, 5, WHITE);

//------------------
    start.x = input1->vector.x + 130;
    start.y = 0.5*(input1->vector.y + input2->vector.y);
    

    DrawRingLinesEx(start, radius, radius+5,  -90, 90, 150,  5, WHITE);
    end.x = input1->vector.x + 130 + radius;
    end.y = 0.5*(input1->vector.y + input2->vector.y);
	output = alloc_node(end);
    and -> output = output;
    
	return(and);
}
