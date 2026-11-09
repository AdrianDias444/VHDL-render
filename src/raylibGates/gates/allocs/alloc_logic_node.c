#include "../../raylibGates.h"



t_logic_node* alloc_logic_node(Vector2 vector)
{
	t_logic_node* node;
	
	node = malloc(sizeof(t_node));
	if(!node)
		return(NULL);

	node -> signal = -1;
	node -> vector = vector;

	return(node);
}