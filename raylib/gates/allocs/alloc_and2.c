#include "../../../header.h"






t_and2* alloc_and2()
{
	t_and2* and2;

	and2 = malloc(sizeof(t_and2));
	if(!and2)
		return(NULL);

	and2->output = NULL;
	and2->input1 = NULL;
	and2->input2 = NULL;

	return (and2);
}