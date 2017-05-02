# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asun <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/30 21:27:19 by asun              #+#    #+#              #
#    Updated: 2016/07/31 13:51:32 by srodrigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 	rush-2
CFLAGS += 	-c -Wall -Wextra -Werror
CFILES = 	rush.c \
			compare.c \
			ft_helpers.c
OFILES =	$(CFILES:.c=.o)
CC =  		gcc

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(OFILES) -o $(NAME)

$(OFILES):
	$(CC) $(CFLAGS) $(CFILES)

clean:
	/bin/rm -rf $(OFILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
