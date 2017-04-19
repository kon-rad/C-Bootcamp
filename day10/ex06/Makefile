# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kgnat <kgnat@student.42.us.org>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/18 10:40:00 by kgnat             #+#    #+#              #
#    Updated: 2017/04/18 16:50:17 by kgnat            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
CC = gcc
RM = rm -f
HDR = -I includes/
SRC = srcs/op.c srcs/main.c srcs/util.c
OBJ = op.o main.o util.o
CCFLAGS = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(CCFLAGS) $(SRC) $(HDR)
	$(CC) $(OBJ) -o $(NAME)

clean:
	/bin/$(RM) $(OBJ)

fclean: clean
	/bin/$(RM) $(NAME)

re: fclean all

