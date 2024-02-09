CC =		cc
CFLAGS	=	-Wall -Wextra -Werror -Iinclude

LIB = libft.a
LFLAGS = -Llib -lft

FILES = push_swap \
		in_B \
		push \
		reverse_rotate \
		rotate \
		swap \
		transac
SRCS = $(addprefix src/, $(addsuffix .c, $(FILES)))
OBJS = $(addprefix obj/, $(addsuffix .o, $(FILES)))

NAME = push_swap

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(LIB) $(OBJS)
		$(CC) -o $@ $(OBJS) $(LFLAGS)

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

.PHONY: all clean fclean re