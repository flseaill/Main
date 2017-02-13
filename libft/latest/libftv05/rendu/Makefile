# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flseaill <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/30 06:17:17 by flseaill          #+#    #+#              #
#    Updated: 2017/01/30 08:32:30 by flseaill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC += src/ft_putchar.c
SRC += src/ft_putnbr.c
SRC += src/ft_putstr.c
SRC += src/ft_isalpha.c
SRC += src/ft_isascii.c
SRC += src/ft_isdigit.c
SRC += src/ft_islower.c
SRC += src/ft_isalnum.c
SRC += src/ft_isprint.c
SRC += src/ft_isupper.c
SRC += src/ft_tolower.c
SRC += src/ft_toupper.c
SRC += src/ft_itoa.c
SRC += src/ft_strlen.c
SRC += src/ft_bzero.c
SRC += src/ft_memdel.c
SRC += src/ft_putchar_fd.c
SRC += src/ft_putendl.c
SRC += src/ft_putendl_fd.c
SRC += src/ft_putstr_fd.c
SRC += src/ft_strnew.c
SRC += src/ft_strclr.c
SRC += src/ft_strcmp.c
SRC += src/ft_strdel.c
SRC += src/ft_strdup.c
SRC += src/ft_memalloc.c
SRC += src/ft_putnbr_fd.c
SRC += src/ft_strsub.c
SRC += src/ft_strcat.c
INC = includes/libft.h
SRCO = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

re: fclean all

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $< -I $(INC)

$(NAME): $(SRCO)
	ar rc $@ $^
	ranlib $@

clean:
	rm -rf $(SRCO)

fclean: clean
	rm -rf $(NAME)

.PHONY: all re clean fclean
