#include "../header.h"


t_gates* create_gate_manager()
{
    t_gates* gate_object;

    gate_object = malloc(sizeof(t_gates));
    if(!gate_object)
        return(NULL);
    
    gate_object -> and_gates = 0;
    gate_object -> or_gates = 0;
    gate_object -> not_gates = 0;
	gate_object -> have_gates = 1;
    
    return(gate_object);
}



int count_word(char* word_check, char* file)
{
    char*   line;
    char**  line_elements;
    int     i;
    int     count;

    int fd = open(file, O_RDONLY);
    count = 0;
    line = ft_remove_newline(get_next_line(fd));
    while(line)
    {
        line_elements = ft_split(line, ' ');
        i = 0;
        while(line_elements[i])
        {
            if(ft_strcmp(line_elements[i], word_check) == 0)
                count++;
            i++;
        }
        line = ft_remove_newline(get_next_line(fd));
    }
    close(fd);
    return(count);
}


t_gates* parser_file(char* file)
{
    int fd;
    t_gates* gate_manager;

    gate_manager = create_gate_manager();
    gate_manager -> and_gates = count_word("and", file);
    gate_manager -> or_gates = count_word("or", file);
    gate_manager -> not_gates = count_word("not", file);

	if(gate_manager->and_gates == 0) {
		if(gate_manager->or_gates == 0) {
			if(gate_manager->not_gates == 0) {
				gate_manager->have_gates = 0;
			}
		}
	}

    return(gate_manager);
}

/*
test
int main()
{
    t_gates* gate_manager;

    gate_manager = parser_file();

    printf("And gates is %d\n", gate_manager -> and_gates);
    printf("Or gates is %d\n", gate_manager -> or_gates);
    printf("Not gates is %d\n", gate_manager -> not_gates);
}

*/
