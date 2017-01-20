# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flseaill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/17 20:40:24 by flseaill          #+#    #+#              #
#    Updated: 2017/01/17 21:09:06 by flseaill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INC = includes/libft.h
SRC = srcs/ft_putchar.c \
	srcs/ft_putstr.c
SRCO = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RENAME = ft_display_file
PROG = $(CC) $(CFLAGS) -o $(RENAME) display_file.c

all: $(NAME)

re: fclean all

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $< -I $(INC)

$(NAME): $(SRCO)
	$(PROG)
	ar rc $@ $^
	ranlib $@

clean:
	rm -rf $(SRCO)

fclean: clean
	rm -rf $(NAME) $(RENAME)

.PHONY: all re clean fclean
