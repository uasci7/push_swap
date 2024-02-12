CFLAGSS = -Wall -Wextra -Werror
SRCS = main.c set_struct.c	push.c	swap.c	rotate.c reverse_rotate.c	control.c	radix.c	buble.c	three_arg_sort.c	four_arg_sort.c	five_arg_sort.c one_arg_sort.c	ft_atol.c other_func.c
OBJS = $(SRCS:.c=.o)
NAME = push_swap
CC = gcc
LIB = ./libft/libft.a
S = 0
E = 100

all: $(NAME)

$(NAME) : $(LIB)  $(OBJS)
	gcc $(OBJS) -g ./libft/libft.a -o $(NAME)

$(LIB) :
	@make -sC ./libft
	@echo "libft compiled."

.c.o:
	$(CC) $(CFLAGSS) -c $< -o $@ -g

clean:
	rm -rf $(OBJS) $(NAME) $(NAME2)

fclean: clean
	make fclean -sC ./libft

re: clean all

.PHONY: clean re fclean all