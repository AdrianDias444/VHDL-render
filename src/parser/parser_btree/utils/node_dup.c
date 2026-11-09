#include "../../parser.h"


t_node* node_dup(t_node* original_node)
{
	t_node* node_dup;

	node_dup = malloc(sizeof(t_node));
	if(!node_dup)
		return(NULL);

	node_dup -> left_node = original_node -> left_node;
	node_dup -> right_node = original_node -> right_node;
	node_dup -> operation = original_node -> operation;
	node_dup -> logic_value = original_node -> logic_value;
	
	return(node_dup);
}
