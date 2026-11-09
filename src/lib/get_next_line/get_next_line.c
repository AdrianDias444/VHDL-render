#include "../lib.h"


char	*get_next_line(int fd)
{
	static char	*stack;
	char		*line;
	char		*temp;
	int			i;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (free(stack), NULL);
	temp = read_newline(fd, stack);
	if (!temp || !*temp)
		return (free(stack), stack = NULL, NULL);
	stack = temp;
	if (!stack || !*stack)
		return (NULL);
	i = 0;
	while (stack[i] && stack[i] != '\n')
		i++;
	line = ft_substr(stack, 0, i + 1);
	if (!line)
		return (free(stack), stack = NULL, NULL);
	stack = clean_old_stack(stack);
	if (stack && !*stack)
	{
		return (free(stack), stack = NULL);
	}
	return (line);
}
