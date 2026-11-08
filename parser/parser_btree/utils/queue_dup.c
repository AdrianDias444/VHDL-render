#include "../../../header.h"


t_queue* queue_dup(t_queue* queue)
{
	t_queue* new_queue;

	new_queue = malloc(sizeof(t_queue));
	if(!new_queue)
		return(NULL);

	new_queue -> first_node = node_list_dup(queue->first_node);
}