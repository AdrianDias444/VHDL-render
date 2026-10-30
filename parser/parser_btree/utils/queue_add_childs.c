#include "../../parser.h"


//      5		     [5, , , , ]	
//     / \ 	   	
//   12   13  	     [12,13, , ]	5
//   /  \    \ 	
//  7    14   2		 [7,14,2, ]	12 13
// / \  /  \  / \ 
//17 23 27 3  8  11  [17,23,27,3,8,11, ] 7 14 2


// This function need to add both childs
// of the node in btree.
// If they exist.

// need to finish this
void queue_add_childs(t_queue* queue, t_btree* btree)
{
	t_node* head;

	if(!queue || !btree)
		return ;
	head = queue_pop(queue);
	if(head->left_node)
		queue_push_back(head->left_node);
	if(head->right_node)
		queue_push_back(head->right_node);


}