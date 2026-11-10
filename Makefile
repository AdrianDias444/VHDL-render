NAME = build/lib/library.a

TEST_LIB = build/lib/test.a

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
		src/graphics/gates/allocs/alloc_and2.c \
		src/graphics/gates/allocs/alloc_logic_node.c \
		\
		src/graphics/gates/draw_gate/draw_and_gate.c \
		\
		src/graphics/utils/f_DrawCircleSectorLinesEx.c \
		src/graphics/utils/f_DrawLineEx.c \
		\
		src/graphics/draw.c \
		\
		src/utils/end_program.c

TEST = tests/functions/node_list_dup/node_list_dup_test.c \
	tests/functions/node_list_dup/node_list_dup.c


OBJECTS = $(patsubst src/%.c,build/obj/src/%.o,$(SOURCES))
TEST_OBJ = $(patsubst tests/%.c,build/obj/tests/%.o,$(TEST))

CC = cc
CFLAGS = -g
COMPRESS = ar rcs
RM = rm -f
LIB = -lraylib

MAIN_FILE = src/main.c
TEST_FILE = tests/functions/mainTest.c

all: $(NAME)
	mkdir -p bin
	$(CC) -o bin/vhdl_render.out $(MAIN_FILE) $(NAME) $(LIB)


$(NAME): $(OBJECTS)
	mkdir -p $(dir $(NAME))
	$(COMPRESS) $(NAME) $(OBJECTS)


build/obj/%.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf build/obj
	$(RM) bin/*.out

fclean: clean
	rm -rf build

re: fclean all

functions: $(TEST_LIB)
	$(CC) -o bin/test.out $(TEST_FILE) $(TEST_LIB) $(NAME)

$(TEST_LIB): $(TEST_OBJ)
	mkdir -p $(dir $(TEST_LIB))
	$(COMPRESS) $(TEST_LIB) $(TEST_OBJ)



.PHONY: all clean fclean re functions