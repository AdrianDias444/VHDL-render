#include "../../parser.h"

// this function duplicate a whole
// linked list made with node
// (t_node)* type

// And returns the first element
// of linked list


t_node* node_list_dup(t_node* first_node)
{
	t_node* dup_node;
	t_node* current;
	t_node* temp_node;
	t_node* dup_first_node;

	if(!first_node)
		return(NULL);

	current = first_node;
	
	dup_first_node = node_dup(current);
	current = current->next;
	temp_node = dup_first_node;
	while(current)
	{
		dup_node = node_dup(current);
		temp_node->next = dup_node;
		temp_node = dup_node;
		current = current->next;
	}
	return(dup_first_node);
}