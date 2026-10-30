#include "../../parser.h"


size_t queue_size(t_queue* queue)
{
	t_node*	current
	size_t	i;

	if(!queue || !queue->first_node)
		return(0);
	current = queue->first_node; 
	i = 0;
	while(current)
	{
		current = current->next;
		i++;
	}
	return(i);
}