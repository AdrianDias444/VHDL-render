#include "../../parser.h"


void queue_push_back(t_queue* queue, t_node* node)
{
	t_node* last_node;

	if(!queue || !node)
		return ;
	last_node = queue_last_node(queue);
	if(!last_node)
		return ;

	last_node->next = node;
}