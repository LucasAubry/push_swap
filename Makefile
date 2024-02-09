CC =		cc
CFLAGS	=	-Wall -Wextra -Werror -Iinclude -g -O0

LIB = lib/libft.a
LFLAGS = -Llib -lft

FILES = push_swap \
		in_B \
		verif \
		price \
		move_node \
		maxi_rotate \
		index_target \
		instruction \
		tools \
		tools_2 \
		up_down \
		allfree

SRCS = $(addprefix src/, $(addsuffix .c, $(FILES)))
OBJS = $(addprefix obj/, $(addsuffix .o, $(FILES)))

NAME = push_swap

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(LIB) $(OBJS)
		$(CC) $(CFLAGS) -o $@ $(OBJS) $(LFLAGS) $(LIB)

$(LIB):
	make -C lib

obj/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

all:	$(NAME)

clean:
		rm -f $(OBJS) $(BONUSOBJS)

fclean:	clean
		rm -f $(NAME)
		make fclean -C lib

re:	fclean all

.PHONY: all clean fclean re