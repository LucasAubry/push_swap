NAME = libft.a

SRCS = ft_isalpha.c \
		ft_toupper.c \
		ft_isdigit.c \
		ft_tolower.c \
		ft_isalnum.c \
		ft_strchr.c \
		ft_isascii.c \
		ft_strrchr.c \
		ft_isprint.c \
		ft_strncmp.c \
		ft_strlen.c \
		ft_memchr.c \
		ft_memset.c \
		ft_memcmp.c \
		ft_bzero.c \
		ft_strnstr.c \
		ft_memcpy.c \
		ft_atoi.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_split.c \
		ft_lstsize.c \
		ft_lstnew.c \
		ft_lstmap.c \
		ft_lstlast.c \
		ft_lstiter.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstadd_front.c \
		ft_lstadd_back.c \
		ft_printf/ft_p.c \
		ft_printf/ft_puthexa.c \
		ft_printf/ft_putchar.c \
		ft_printf/ft_putnbr.c \
		ft_printf/ft_putstr.c \
		ft_printf/ft_putunbr.c \
		ft_printf/ft_printf.c

AR = ar rcs

OBJS =	${SRCS:.c=.o}

CC =	cc

CFLAGS	=	-Wall -Wextra -Werror -g#-fsanitize=address

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
