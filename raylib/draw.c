#include "../header.h"


void draw(t_gates* gates)
{
	Vector2 start;
	Vector2 end;

	t_node* input1;
	t_node* input2;
	t_and2*	current_and;

	if(gates->have_gates == 0)
		return ;

	start.x = 30;
	start.y = 30;

	end.x = 30;
	end.y = 80;

	input1 = alloc_node(start);
	input2 = alloc_node(end);

	current_and = draw_and_gate(input1, input2);
	
	input1->vector.x = current_and->output->vector.x;
	input1->vector.y = current_and->output->vector.y + 65;

	draw_and_gate(current_and->output, input1);

}