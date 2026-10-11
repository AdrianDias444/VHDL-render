#include "../lib.h"


char	*read_newline(int fd, char *stack)
{
	char	*buffer;
	int		bytes_lidos;
	int		i;

	i = 0;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	bytes_lidos = 1;
	while (bytes_lidos > 0)
	{
		bytes_lidos = read(fd, buffer, BUFFER_SIZE);
		if (bytes_lidos <= 0)
			break ;
		buffer[bytes_lidos] = '\0';
		stack = ft_strjoin_2(stack, buffer);
		while (stack[i])
		{
			if (stack[i] == 10)
				return (free(buffer), stack);
			i++;
		}
	}
	free(buffer);
	return (stack);
}

char	*clean_old_stack(char *stack)
{
	int		i;
	char	*new_stack;

	if (!stack || !*stack)
	{
		free(stack);
		return (NULL);
	}
	i = 0;
	while (stack[i] && stack[i] != '\n')
		i++;
	if (stack[i] == '\n')
		i++;
	if (!stack[i])
		return (free(stack), NULL);
	new_stack = ft_substr(stack, i, ft_strlen(stack) - i);
	free(stack);
	return (new_stack);
}


char	*ft_strjoin_2(char *s1, char *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	if (!s2)
		return (NULL);
	if (!s1 || !*s1)
		return (ft_substr(s2, 0, ft_strlen(s2)));
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (free(s1), str);
}
