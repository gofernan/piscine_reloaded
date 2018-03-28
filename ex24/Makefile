# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gofernan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 13:36:21 by gofernan          #+#    #+#              #
#    Updated: 2017/11/13 13:59:15 by gofernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./srcs/
HEADER = ./includes/
FLAG = -Wall -Wextra -Werror
OPTION = -c -I $(HEADER)
FILES = $(SRC)ft_putchar.c \
	$(SRC)ft_putstr.c \
	$(SRC)ft_strcmp.c \
	$(SRC)ft_strlen.c \
	$(SRC)ft_swap.c
OES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
	gcc $(FLAG) $(OPTION) $(FILES)
	ar rc $(NAME) $(OES)
clean:
	/bin/rm -f $(OES)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
