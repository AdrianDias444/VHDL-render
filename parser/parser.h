#ifndef PARSER_H
#define PARSER_H

typedef struct s_node
{
	struct s_node*	left_node;
	struct s_node*	right_node;
	char*			operation;
	int				logic_value;
} node;

typedef struct s_btree
{

} t_btree;




#endif