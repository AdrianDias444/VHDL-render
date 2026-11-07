#include "../../parser.h"


//      5		     [5, , , , ]	
//     / \ 	   	
//   12   13  	     [12,13, , ]	5
//   /  \    \ 
//  7    14   2		 [7,14,2, ]	12 13
// / \  /  \  / \ 
//17 23 27 3  8  11  [17,23,27,3,8,11, ] 7 14 2


// This function add both childs of a node
// of the node in btree.
// If they exist.

void queue_add_childs(t_queue* queue, t_btree* btree)
{
	t_node* head;
	t_node*	left_node;
	t_node*	right_node;

	if(!queue || !btree)
		return ;
	
	head = queue_pop(queue);	
	while(head)
	{
		left_node = head->left_node;
		right_node = head->right_node;
	
		if(left_node)
			queue_push_back(left_node);
		if(head->right_node)
			queue_push_back(head->right_node);
		head = queue_pop(queue);
	}
}