# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/09 15:34:23 by maraurel          #+#    #+#              #
#    Updated: 2021/02/16 15:11:46 by maraurel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c \
	ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_itoa.c ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
	ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c \
	ft_lstnew.c ft_lstsize.c ft_memccpy.c ft_memcmp.c \
	ft_memcpy.c ft_memmove.c ft_memset.c ft_memchr.c \
	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
	ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c \
	ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
	ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
	ft_tolower.c / ft_toupper.c / ft_strncmp.c

OBJS = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

CC = gcc

HEADER = libft.h

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRC)
	@ar -rc $(NAME) $(OBJS)
	@ranlib $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
