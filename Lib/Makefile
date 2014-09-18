# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdubray <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/08 11:43:20 by mdubray           #+#    #+#              #
#    Updated: 2014/09/10 11:12:31 by mdubray          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a

SRC= ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c \
	 ./srcs/ft_strlen.c ./srcs/ft_swap.c
HEADER= ./includes/
OBJECT= ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME): $(SRC)
	gcc -c $(SRC) -I $(HEADER)
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME)

clean:
	rm -rf $(OBJECT)

fclean: clean
	rm -rf $(NAME)

re: fclean all

