/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Laubry <aubrylucas.pro@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 01:41:36 by Laubry            #+#    #+#             */
/*   Updated: 2024/02/01 15:57:28 by Laubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# define BUFF_SIZE 8192
# define MAX_INT 2147483648

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_old_list;

typedef struct list 
{
	long content;
	int price;
	int index;
	struct list	*next;
	struct list	*target;
}					t_list;

long				ft_atol(char *str);
void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t nmemb, size_t size);
void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
char				**ft_split(char const *s, char c);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_putnbr_fd(int n, int fd);
char				*ft_itoa(int n);
char				*ft_strjoin(char *s1, char *s2);
void				ft_putstr_fd(char *s, int fd);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_substr(char const *s, unsigned int start, size_t len);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_memcmp(const void *ptr1, const void *ptr2, size_t s);
void				*ft_memcpy(void *dst, const void *source, size_t size);
void				*ft_memmove(void *dest, const void *src, size_t len);
void				*ft_memset(void *ptr, int val, size_t cout);
char				*ft_strchr(const char *str, int c);
char				*ft_strdup(const char *src);
char				ft_strcat(char *dest, const char *src);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
size_t				ft_strlen(const char *str);
int					ft_strcmp(const char *str1, const char *str2);
char				*ft_strnstr(const char *str, const char *needle,
						size_t len);
char				*ft_strrchr(const char *str, int c);
int					ft_tolower(int chr);
int					ft_toupper(int chr);
void				*ft_memchr(const void *s, int c, size_t n);
char				*ft_strtrim(char const *s1, char const *set);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
int					ft_isdigit(char *c);
void				ft_lstadd_back(t_list **lst, t_list *new);
t_list				*ft_lstnew(long content);
void				ft_lstadd_front(t_list **lst, t_list *new);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
int					ft_lstsize(t_list *lst);
void				ft_lstiter(t_list *lst, void (*f)(long));
t_list				*ft_lstmap(t_list *lst, long (*f)(long), void (*del)(void *));

//ft_printf
int		ft_p(void *adresse);
int		ft_putchar(char c);
int		ft_putnbr(int nb);
int		ft_putunbr(unsigned int nb);
int		ft_putstr(char *str);
void	ft_puthexa_2(unsigned int nb, char *base);
int		ft_puthexa(unsigned int nb, char *base);
int		ft_printf(const char *format, ...);
void	ft_putnbr_fd(int n, int fd);

#endif
