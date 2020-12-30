/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 12:00:07 by gde-matt          #+#    #+#             */
/*   Updated: 2020/02/03 16:00:27 by gde-matt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

typedef	struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
int					ft_atoi(const char *str);
void				ft_bzero(void *s, unsigned long int n);
void				*ft_calloc(unsigned long int count,
		unsigned long int size);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
void				*ft_memccpy(void *dst, const void *src, int c,
		unsigned long int n);
void				*ft_memchr(const void *s, int c, unsigned long int n);
int					ft_memcmp(const void *s1, const void *s2,
		unsigned long int n);
void				*ft_memcpy(void *dst, const void *src, unsigned long int n);
void				*ft_memmove(void *dst, const void *src,
		unsigned long int len);
void				*ft_memset(void *b, int c, unsigned long int len);
char				*ft_strchr(const char *s, int c);
unsigned long int	ft_strlcat(char *dst, const char *src,
		unsigned long int dstsize);
long unsigned int	ft_strlcpy(char *dst, const char *src,
		long unsigned int dstsize);
size_t				ft_strlen(const char *str);
int					ft_strncmp(const char *s1, const char *s2,
		unsigned long int n);
char				*ft_strnstr(const char *haystack, const char *needle,
		unsigned long int len);
char				*ft_strrchr(const char *s, int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
void				*ft_memmove(void *dst, const void *src,
		long unsigned int len);
void				*ft_calloc(unsigned long int count, unsigned long int size);
char				*ft_strdup(const char *s1);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);
char				*ft_itoa(int n);
void				ft_putnbr_fd(int n, int fd);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
		void (*del)(void *));

#endif
