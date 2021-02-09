# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/09 13:19:52 by maraurel          #+#    #+#              #
#    Updated: 2021/02/09 15:15:52 by maraurel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = -gcc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c /
	ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c /
	ft_itoa.c ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c /
	ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c /
	ft_lstnew.c ft_lstsize.c ft_memccpy.c ft_memcmp.c /
	ft_memcpy.c ft_memmove.c ft_memset.c ft_memchr.c /
	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c /
	ft_split.c ft_strchr.c

all:
	$(CC) $(CFLAGS)

clean:
	$(RM) ./a.out

fclean:


re:

.PHONY: all clean fclean re
