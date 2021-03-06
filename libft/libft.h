/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhildred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 15:10:16 by nhildred          #+#    #+#             */
/*   Updated: 2020/11/11 15:44:32 by nhildred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

void			*ft_memset(void *destination, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy (void *destination, const void *source, size_t n);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*memchr (const void *arr, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *arr, int c, size_t n);
int				ft_memcmp(const void *buf1, const void *buf2, size_t count);
int				ft_strlen(char *str);
char			*ft_strchr(const char *str, int c);
char			*ft_strrchr (const char *str, int c);
int				ft_strncmp(const char *str1, const char *str2, size_t n);
char			*ft_strnstr (const char *h, const char *n, size_t l);
int				ft_atoi(char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower (int c);
char			*ft_strdup(char *src);
void			*ft_calloc(size_t count, size_t size);
size_t			ft_strlcpy(char *dest, const char *src, unsigned int s);
size_t			ft_strlcat(char *dst, const char *src, size_t s);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_itoa(int n);
char			**ft_split(char const *s, char c);
typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstadd_back(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *));

#endif
