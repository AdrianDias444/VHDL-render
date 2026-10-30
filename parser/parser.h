#ifndef PARSER_H
#define PARSER_H

typedef struct s_node
{
	struct s_node*	left_node;
	struct s_node*	right_node;
	char*			operation;
	int				logic_value;
	struct s_node*	next;
} node;

typedef struct s_btree
{
	node* last_operation;
} t_btree;


typedef struct s_queue
{
	node* first_node;
} t_queue;

#endif