NAME = library.a

SOURCES = lib/get_next_line/get_next_line.c \
		lib/get_next_line/get_next_line_utils.c \
		\
		lib/str/ft_itoa.c \
		lib/str/ft_memcpy.c \
		lib/str/ft_remove_newline.c \
		lib/str/ft_split.c \
		lib/str/ft_strcmp.c \
		lib/str/ft_strdup.c \
		lib/str/ft_strjoin.c \
		lib/str/ft_strlcpy.c \
		lib/str/ft_strlen.c \
		lib/str/ft_substr.c \
		\
		parser/parser_btree/allocs/alloc_btree.c \
		parser/parser_btree/allocs/alloc_node.c \
		parser/parser_btree/allocs/alloc_queue.c \
		\
		parser/parser_btree/btree_traversal/bfs.c \
		\
		parser/parser_btree/utils/node_dup.c \
		parser/parser_btree/utils/node_list_dup.c \
		parser/parser_btree/utils/queue_add_childs.c \
		parser/parser_btree/utils/queue_dup.c \
		parser/parser_btree/utils/queue_last_node.c \
		parser/parser_btree/utils/queue_pop.c \
		parser/parser_btree/utils/queue_push_back.c \
		parser/parser_btree/utils/queue_retry_level.c \
		parser/parser_btree/utils/queue_size.c \
		\
		parser/parser_btree/create_btree.c \
		\
		parser/count_gates.c \
		\
		raylib/gates/allocs/alloc_and2.c \
		raylib/gates/allocs/alloc_node.c \
		\
		raylib/gates/draw_gate/draw_and_gate.c \
		\
		raylib/utils/f_DrawCircleSectorLinesEx.c \
		raylib/utils/f_DrawLineEx.c \
		\
		raylib/draw.c \
		\
		test_functions/node_list_dup/node_list_dup_test.c \
		test_functions/node_list_dup/node_list_dup.c \
		\
		test_functions/mainTest.c \
		\
		utils/end_program.c

OBJECTS = $(SOURCES:%.c=%.o)
CC = cc -g
CFLAGS = -Wall -Wextra -Werror
COMPRESS = ar rcs
RM = rm -f


MAIN_FILE = main.c -lraylib
TEST_FILE = test_functions.mainTest.c


all: $(NAME)
	$(CC) $(MAIN_FILE) $(NAME)
	$(RM) $(OBJECTS)
$(NAME): $(OBJECTS)
	$(COMPRESS) $(NAME) $(OBJECTS)


%.o: %.c
	$(CC) -c $< -o $@
clean:
	$(RM) $(OBJECTS)
fclean: clean
	$(RM) $(NAME)
re: fclean all

test: 
	$(CC) $(TEST_FILE) $(NAME)

.PHONY: all clean fclean re
