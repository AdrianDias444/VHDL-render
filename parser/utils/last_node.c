#include "../parser.h"


node* last_node(t_btree* btree)
{
	t_node* current;
	t_node* last_node;
	int i;
	int j;

	current = btree->last_operation;
	last_node = current;
	j = 0;
	while(current->left_node)
	{
		i = 0;
		current = current->left_node;
		i++:
		j++;

		
	}
}