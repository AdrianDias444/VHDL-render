#include "../parser.h"


node* first_operation(t_btree* btree)
{
	node* current;

	current = btree->last_operation;

	while(current->left_node
		&& current->left_node->operation)
	{
		current = current -> left_node;
		while(current->right_node
			&& current->right_node->operation)
		{
			current = current -> right_node;
		}
	}
	return(current);
}