#include "../parser.h"

// Breadth first search of a binary tree
// This traversal nodes in level by level order

// 			and2
// 			/ \ 
//		   a1 and2
//			 /   \ 
//			a2	 a3	

// This search ony looks for operations
// So we want to store all in a queue of and2 nodes
// in a array and return the the correct
// operation "operation number" the argument
// of the function.
// So if we pass 0 as "operation_nb",
// we want the breadth operation   and2
//								   /  \ 
//								  a2  a3
//
//	[and2 and2 and2 ]
// Resources:
// https://www.geeksforgeeks.org/dsa/level-order-tree-traversal/


// This function needs to record the last queue returned
// That is, a static varible, for every call of function returned a specific level



//      5		     
//     / \ 	   	
//   12   13  	     
//   /  \    \ 
//  7    14   2		 
// / \  /  \  / \ 
//17 23 27 3  8  11

// 1'st call of bfs -> [17, 23, 27, 3, 8, 11]
// 2'nd call of bfs -> [7 14, 2]
// 3'rd call of bfs -> [12, 13]
// 4'th call of bfs -> [5]


t_node* bfs(t_btree* btree, int operation_nb)
{
	static t_queue* level_queue;
		
}

