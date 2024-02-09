NAME = libft.a

SRCS = push_swap.c

AR = ar rcs

OBJS =	${SRCS:.c=.o}

CC =	cc

CFLAGS	=	-Wall -Wextra -Werror #-fsanitize=address

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): ${OBJS}
		$(AR) $(NAME) ${OBJS}

all:	${NAME}

clean:
		rm -f ${OBJS} ${BONUSOBJS}

fclean:	clean
		rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re