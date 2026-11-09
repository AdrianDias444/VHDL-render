NAME = library.a

SOURCES = src/lib/get_next_line/get_next_line.c \
		src/lib/get_next_line/get_next_line_utils.c \
		\
		src/lib/str/ft_itoa.c \
		src/lib/str/ft_memcpy.c \
		src/lib/str/ft_remove_newline.c \
		src/lib/str/ft_split.c \
		src/lib/str/ft_strcmp.c \
		src/lib/str/ft_strdup.c \
		src/lib/str/ft_strjoin.c \
		src/lib/str/ft_strlcpy.c \
		src/lib/str/ft_strlen.c \
		src/lib/str/ft_substr.c \
		\
		src/parser/parser_btree/allocs/alloc_btree.c \
		src/parser/parser_btree/allocs/alloc_node.c \
		src/parser/parser_btree/allocs/alloc_queue.c \
		\
		src/parser/parser_btree/btree_traversal/bfs.c \
		\
		src/parser/parser_btree/utils/node_dup.c \
		src/parser/parser_btree/utils/node_list_dup.c \
		src/parser/parser_btree/utils/queue_add_childs.c \
		src/parser/parser_btree/utils/queue_dup.c \
		src/parser/parser_btree/utils/queue_last_node.c \
		src/parser/parser_btree/utils/queue_pop.c \
		src/parser/parser_btree/utils/queue_push_back.c \
		\
		src/parser/parser_btree/utils/queue_size.c \
		\
		src/parser/parser_btree/create_btree.c \
		\
		src/parser/count_gates.c \
		\
		src/raylibGates/gates/allocs/alloc_and2.c \
		src/raylibGates/gates/allocs/alloc_logic_node.c \
		\
		src/raylibGates/gates/draw_gate/draw_and_gate.c \
		\
		src/raylibGates/utils/f_DrawCircleSectorLinesEx.c \
		src/raylibGates/utils/f_DrawLineEx.c \
		\
		src/raylibGates/draw.c \
		\
		src/test_functions/node_list_dup/node_list_dup_test.c \
		src/test_functions/node_list_dup/node_list_dup.c \
		\
		src/test_functions/mainTest.c \
		\
		src/utils/end_program.c

OBJECTS = $(SOURCES:%.c=%.o)
CC = cc
CFLAGS = -g
COMPRESS = ar rcs
RM = rm -f
LIB = -lraylib

MAIN_FILE = src/main.c
TEST_FILE = test_functions/mainTest.c


all: $(NAME)
	$(CC) -o bin/vhdl_render.out $(MAIN_FILE) $(NAME) $(LIB) 
	$(RM) $(OBJECTS)
$(NAME): $(OBJECTS)
	$(COMPRESS) $(NAME) $(OBJECTS)


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	$(RM) $(OBJECTS)
	$(RM) bin/vhdl_render.out
fclean: clean
	$(RM) $(NAME)
re: fclean all

test: 
	$(CC) $(TEST_FILE) $(NAME)

.PHONY: all clean fclean re
