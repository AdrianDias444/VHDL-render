#include "../../parser.h"

t_node* queue_last_node(t_queue* queue)
{
	t_node* current;

	if(!queue || !queue->first_node)
		return(NULL);
	current = queue->first_node;
	while(current->next)
		current = current->next;
	return(current);
}