#include "../parser.h"

// Breadth first search of a binary tree
// This traversal nodes in level by level order

// 			and2
// 			/ \ 
//		   a1 and2
//			 /   \ 
//			a2	 a3	

// This search ony looks for operations
// So we want to store all of and2 nodes
// in a array and return the the correct
// operation "operation number" the argument
// of the function.
// So if we pass 0 as "operation_nb",
// we want the breadth operation   and2
//								   /  \ 
//								  a2  a3
// Resources:
// https://www.geeksforgeeks.org/dsa/level-order-tree-traversal/

t_node* bfs(t_btree* btree, int operation_nb)
{

}

