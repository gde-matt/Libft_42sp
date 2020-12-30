# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gde-matt <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/23 11:25:39 by gde-matt          #+#    #+#              #
#    Updated: 2020/02/03 14:59:28 by gde-matt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

C_SOURCE	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
			  ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c\
			  ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c\
			  ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c\
			  ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c\
			  ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c\
			  ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

C_BONUS		= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
			  ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstmap.c\
			  ft_lstiter.c

OBJS		= $(C_SOURCE:.c=.o)

OBJS_BONUS	= $(C_BONUS:.c=.o)

CC			= gcc

CC_FLAGS	= -Wall -Wextra -Werror

RM			= rm -f

all:		$(NAME)

$(OBJS):	$(C_SOURCE)
			$(CC)  $(CC_FLAGS) -c $(C_SOURCE)

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)

clean:
			$(RM) $(OBJS) $(OBJS_BONUS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

bonus:		$(OBJS) $(OBJS_BONUS)
			ar rc $(NAME) $(OBJS) $(OBJS_BONUS)

.PHONY:		all clean fclean re bonus
