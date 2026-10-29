#include "../parser.h"


t_node* alloc_node()
{
	t_node* node;

	node = malloc(sizeof(t_node));
	if(!node)
		return(NULL);

	node -> left_node = NULL;
	node ->right_node = NULL;
	node -> operation = NULL;
	node -> logic_value = 0;

	return(node);
}