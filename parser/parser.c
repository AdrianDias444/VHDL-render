#include "../header.h"

int parser_and_gate(int fd)
{
    char*   line;
    char**  line_elements;
    int     i;
    int     and_count;
    char*   and = "and";

    and_count = 0;
    while(line = get_next_line(fd))
    {
        line_elements = ft_split(line, ' ');
        if(line_elements)
        {
            i = 0;
            while(line_elements[i])
            {
                if(ft_strcmp(line_elements[i], and) == 0)
                    and_count++;
                i++;
            }
            i = 0;
            while(line_elements[i])
                free(line_elements[i++]);
            free(line_elements);
        }
        free(line);
    }
    return(and_count);
}
int parser_file(char* vhd_file)
{
    int fd;

    fd = open(vhd_file, O_RDONLY);
    if(fd < 0)
        return(-1);
    return(parser_and_gate(fd));
}
