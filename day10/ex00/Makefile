# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kgnat <kgnat@student.42.us.org>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/17 09:31:00 by kgnat             #+#    #+#              #
#    Updated: 2017/04/18 22:48:37 by kgnat            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
SRC_DIR = ./srcs/
SRC = $(SRC_DIR)ft_putchar.c $(SRC_DIR)ft_putstr.c $(SRC_DIR)ft_strcmp.c \
	$(SRC_DIR)ft_strlen.c $(SRC_DIR)ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o 
HDR = -I ./includes/
CFLAG = -Wall -Wextra -Werror -c
LIB_NAME = libft.a

all: $(LIB_NAME)

$(LIB_NAME):
	$(CC) $(CFLAG) $(SRC) $(HDR)
	ar rc $(LIB_NAME) $(OBJ)
	ranlib $(LIB_NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(LIB_NAME)

re: fclean all

