#include "../../../header.h"



t_node* alloc_node(Vector2 vector)
{
	t_node* node;
	
	node = malloc(sizeof(t_node));
	if(!node)
		return(NULL);

	node -> signal = -1;
	node -> vector = vector;
}