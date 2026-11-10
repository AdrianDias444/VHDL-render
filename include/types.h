#ifndef TYPES_H
#define TYPES_H

//-----------------------
// struct for parser
typedef struct s_gates {
    int and_gates;
    int or_gates;
    int not_gates;
	int	have_gates;
} t_gates;


typedef struct s_node
{
	struct s_node*	left_node;
	struct s_node*	right_node;
	char*			operation;
	int				logic_value;
	struct s_node*	next;
} t_node;


//----------------------
// struct for node, can be a input or output node
typedef struct logic_node {
    int     signal;
    Vector2 vector;
} t_logic_node;


//----------------------
// struct for and gate
typedef struct s_and2 {
    t_logic_node*	output;
    t_logic_node*	input1;
    t_logic_node*	input2;
} t_and2;


#endif