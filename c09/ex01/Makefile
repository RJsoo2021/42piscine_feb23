# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/25 15:31:13 by rsoo              #+#    #+#              #
#    Updated: 2023/03/01 12:21:30 by rsoo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Two things: Declarations and Rules

# Variables: store values for reuse throughout makefile
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I
INCDIR = ./includes/
LIBNAME = libft.a
SRCDIR = ./srcs/
CFILES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRC = $(addprefix $(SRCDIR), $(CFILES))

OBJ = $(SRC:.c=.o)

# Targets: files you want to create when command is run 
all: $(LIBNAME)

$(OBJ): $(SRCDIR)%.o: $(SRCDIR)%.c ./includes/ft.h
	$(CC) $(CFLAGS) $(INCDIR) -c $< -o $@ 

$(LIBNAME): $(OBJ)
	ar rcs $(LIBNAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIBNAME)

re: fclean all

# .PHONY: tells make that listed targets are not real files
.PHONY: clean fclean re

# Notes
# $< first dependency of the rule
# $@ target of the rule: $(OBJ)