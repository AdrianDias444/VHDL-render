// + + + + + + + + + + + + + + + + + + + + + + 
//  t_node* node_list_dup(t_node* first_node);
// + + + + + + + + + + + + + + + + + + + + + + 
// this function duplicate a whole
// linked list made with node
// (t_node)* type

// And returns the first element
// of linked list
// -------------------------------------------

#include "../test.h"

// this verify, if 2 nodes have the same content
int nodes_checker(t_node* first, t_node* second)
{
	if(!first && !second)
		return(1);
	if(!first || !second)
		return (0);
	if(first->logic_value != second->logic_value)
		return(0);

	if (first->operation && second->operation) {
		if (ft_strcmp(first->operation, second->operation) != 0)
			return (0);
	}
	if (!nodes_checker(first->left_node, second->left_node));
		return (0);
	if (!nodes_checker(first->right_node, second->right_node));
		return (0);
	return(1);
}



void config_node1(t_node* node)
{
	node -> operation = "and2";
	node -> logic_value = 1;
}

void config_node2(t_node* node)
{
	node -> operation = "not";
	node -> logic_value = 0;
}

void config_node3(t_node* node)
{
	node -> operation = "or2";
	node -> logic_value = 1;
}


void node_list_dup_test()
{
	t_node* dup_node;
	t_node* node1;
	t_node* node2;
	t_node* node3;

	node1 = alloc_node();
	node2 = alloc_node();
	node3 = alloc_node();


	config_node1(node1);
	config_node2(node2);
	config_node3(node3);

	node1->left_node = node2;
	node2->right_node = node3;

	dup_node = node_list_dup(node1);

	printf("Node1: \n");
	printf("Node 1 and Node 1 duplicated: %d", nodes_checker(node1, dup_node));

	printf("Node2: \n");
	printf("Node 2 and Node 2 duplicated: %d", nodes_checker(node2, dup_node->next));

	printf("Node3: \n");
	printf("Node 3 and Node 3 duplicated: %d", nodes_checker(node3, dup_node->next->next));
}