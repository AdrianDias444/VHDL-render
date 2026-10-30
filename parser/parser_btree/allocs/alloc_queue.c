#include "../../parser.h"

t_queue* alloc_queue()
{
	t_queue* queue;

	queue = malloc(sizeof(t_queue));
	if(!queue)
		return(NULL);

	queue->first_node = NULL;
	queue->next = NULL;

	return(queue);
}