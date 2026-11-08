#include "../../../header.h"


// This function remove the first element
// of the queue and returns it.

t_node* queue_pop(t_queue* queue)
{
	t_node* first_node;

	if(!queue || !queue->first_node)
		return(NULL);

	first_node = queue->first_node;
	queue->first_node = first_node->next;
	first_node->next = NULL;
	return(first_node);
}