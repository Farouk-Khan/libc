# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fkhan <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/17 10:55:51 by fkhan             #+#    #+#              #
#    Updated: 2018/05/18 12:18:00 by fkhan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TAG = gcc
NAME = libft.a
FLAG = -Wall -Werror -Wextra
SRC = ft_atoi.c ft_strlen.c ft_strdup.c ft_strcpy.c

all:
		$(TAG) $(FLAGS) -c $(SRC)
		ar rc $(NAME) *.o
		ranlib $(NAME)

clean:
		rm -f *.o

fclean: clean
		rm -f libft.a

re: fclean all
