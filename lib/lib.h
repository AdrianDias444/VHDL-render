#ifndef LIB_H
#define LIB_H


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


#ifndef BUFFER_SIZE
#define BUFFER_SIZE 2
#endif


char	**ft_split(char const *s, char c);
char	*ft_strjoin(char const *s1, char const *s2);
size_t  ft_strlcpy(char* dst, const char *src, size_t size);
size_t  ft_strlen(const char *s);
char*   ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strdup(const char *s);

char	*get_next_line(int fd);
char	*clean_old_stack(char *stack);
char	*read_newline(int fd, char *stack);
char	*ft_strjoin_2(char *s1, char *s2);


#endif
