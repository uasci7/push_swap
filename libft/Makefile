# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uasci <uasci@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/03 18:01:52 by saksoy            #+#    #+#              #
#    Updated: 2023/07/31 22:17:01 by uasci            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

list = *.c

OBJS = $(list:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

all: $(NAME)

.c.o:
	$(CC) -c $(CFLAGS) $< $(list)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)

re:fclean $(NAME)

.PHONY: clean fclean all re
