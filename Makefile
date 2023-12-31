CC =		cc
CFLAGS	=	-Wall -Wextra -Werror -Iinclude -g

LIB = lib/libft.a
LFLAGS = -Llib -lft

FILES = push_swap \
		in_B \
		push \
		reverse_rotate \
		rotate \
		swap \
		transac \
		algo
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

re:	fclean all
	make re -C lib

.PHONY: all clean fclean re