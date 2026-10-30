#include "../parser.h"

t_btree* alloc_btree()
{
	t_btree* btree;

	btree = malloc(sizeof(t_btree));
	if(!btree)
		return(NULL);

	btree -> last_operation = NULL;
	return(btree);
}