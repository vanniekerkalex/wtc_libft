# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/19 13:48:02 by avan-ni           #+#    #+#              #
#    Updated: 2018/05/19 13:49:18 by avan-ni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

SRC = ft_strscmp.c

INC = includes

CFLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -I$(INC)
	ar rc $(NAME) ft_strcmp.o
	ranlib $(NAME)

clean:
	/bin/rm -f ft_strcmp.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

