#include "../../../header.h"


//      5		     [5, , , , ]	
//     / \ 	   	
//   12   13  	     [12,13, , ]	5
//   /  \    \ 
//  7    14   2		 [7,14,2, ]	12 13
// / \  /  \  / \ 
//17 23 27 3  8  11  [17,23,27,3,8,11, ] 7 14 2


// This function add both childs of a node
// in btree. If they exist.

void queue_add_childs(t_queue* queue)
{
	t_node* head;

	if(!queue)
		return ;

	head = queue_pop(queue);
	if(head->left_node)
		queue_push_back(queue, head->left_node);
	if(head->right_node)
		queue_push_back(queue, head->right_node);
}
