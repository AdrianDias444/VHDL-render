#include "../lib.h"


char* ft_remove_newline(char* str)
{
	char* dup;

    if(!str)
        return(NULL);
	dup = ft_strdup(str);
	dup[ft_strlen(dup) - 1] = '\0';
	return(dup);
}
