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

//----------------
// parser_btree
// allocs
t_btree*	alloc_btree();
t_node*		alloc_node();
t_queue*	alloc_queue();

// btree_traversal
t_node*		bfs(t_btree* btree, int operation_nb);

// utils for btree operations
t_node*		node_dup(t_node* original_node);
t_node*		node_list_dup(t_node* first_node);
void		queue_add_childs(t_queue* queue);
t_queue*	queue_dup(t_queue* queue);
t_node*		queue_last_node(t_queue* queue);
t_node*		queue_pop(t_queue* queue);
void		queue_push_back(t_queue* queue, t_node* node);
t_queue*	queue_retry_level(t_queue queue);
size_t		queue_size(t_queue* queue);




//----------------
// create btree main function
t_btree*	create_btree();




//----------------
// count gates
t_gates*	parser_file(char* file);




#endif