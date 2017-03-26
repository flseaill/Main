# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: florianseailles <florianseailles@student.42.fr>+#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/30 06:17:17 by flseaill          #+#    #+#              #
#    Updated: 2017/03/18 19:00:01 by flseaill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a
SRC += srcs/ft_atoi.c
SRC += srcs/ft_bzero.c
SRC += srcs/ft_countwords.c
SRC += srcs/ft_intlen.c
SRC += srcs/ft_isalnum.c
SRC += srcs/ft_isalpha.c
SRC += srcs/ft_isascii.c
SRC += srcs/ft_isdigit.c
SRC += srcs/ft_islower.c
SRC += srcs/ft_isneg.c
SRC += srcs/ft_isprint.c
SRC += srcs/ft_isspace.c
SRC += srcs/ft_isupper.c
SRC += srcs/ft_itoa.c
SRC += srcs/ft_memalloc.c
SRC += srcs/ft_memchr.c
SRC += srcs/ft_memcmp.c
SRC += srcs/ft_memcpy.c
SRC += srcs/ft_memccpy.c
SRC += srcs/ft_memdel.c
SRC += srcs/ft_memmove.c
SRC += srcs/ft_memset.c
SRC += srcs/ft_printtab.c
SRC += srcs/ft_putchar.c
SRC += srcs/ft_putchar_fd.c
SRC += srcs/ft_putendl.c
SRC += srcs/ft_putendl_fd.c
SRC += srcs/ft_putnbr.c
SRC += srcs/ft_putnbr_fd.c
SRC += srcs/ft_putstr.c
SRC += srcs/ft_putstr_fd.c
SRC += srcs/ft_strcat.c
SRC += srcs/ft_strncat.c
SRC += srcs/ft_strlcat.c
SRC += srcs/ft_strchr.c
SRC += srcs/ft_strrchr.c
SRC += srcs/ft_strclr.c
SRC += srcs/ft_strcmp.c
SRC += srcs/ft_strncmp.c
SRC += srcs/ft_strcpy.c
SRC += srcs/ft_strncpy.c
SRC += srcs/ft_strdel.c
SRC += srcs/ft_strdup.c
SRC += srcs/ft_strequ.c
SRC += srcs/ft_strnequ.c
SRC += srcs/ft_striter.c
SRC += srcs/ft_striteri.c
SRC += srcs/ft_strjoin.c
SRC += srcs/ft_strlen.c
SRC += srcs/ft_strmap.c
SRC += srcs/ft_strmapi.c
SRC += srcs/ft_strnew.c
SRC += srcs/ft_strsplit.c
SRC += srcs/ft_strstr.c
SRC += srcs/ft_strnstr.c
SRC += srcs/ft_strsub.c
SRC += srcs/ft_strtrim.c
SRC += srcs/ft_tolower.c
SRC += srcs/ft_toupper.c
SRC += srcs/ft_lenwords.c
SRC += srcs/ft_strrev.c
INC = includes/libft.h
SRCO = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

re: fclean all

.c.o:
	@$(CC) $(CFLAGS) -o $@ -c $< -I $(INC)

$(NAME): $(SRCO)
	@ar rc $@ $^
	@ranlib $@

clean:
	rm -rf $(SRCO)

fclean: clean
	rm -rf $(NAME)

.PHONY: all re clean fclean
