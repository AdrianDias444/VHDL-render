NAME = library.a

SOURCES = raylib/draw_text.c \
		raylib/draw_image.c \
		\
		lib/str/ft_split.c \
		lib/str/ft_strjoin.c \
		lib/str/ft_strlcpy.c \
		lib/str/ft_strlen.c \
		lib/str/ft_substr.c \
		lib/str/ft_memcpy.c \
		lib/str/ft_strdup.c \
		lib/str/ft_strcmp.c \
		lib/str/ft_itoa.c \
		lib/get_next_line/get_next_line.c \
		lib/get_next_line/get_next_line_utils.c \
		\
		parser/parser.c


OBJECTS = $(SOURCES:%.c=%.o)
CC = cc -g
MAIN_FILE = main.c -lraylib
CFLAGS = -Wall -Wextra -Werror
COMPRESS = ar rcs
RM = rm -f

all: $(NAME)
	$(CC) $(MAIN_FILE) $(NAME)
	$(RM) $(OBJECTS) $(NAME)
$(NAME): $(OBJECTS)
	$(COMPRESS) $(NAME) $(OBJECTS)


%.o: %.c
	$(CC) -c $< -o $@
clean:
	$(RM) $(OBJECTS)
fclean: clean
	$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re
