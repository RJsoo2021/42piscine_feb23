# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 11:38:03 by rsoo              #+#    #+#              #
#    Updated: 2023/03/01 19:57:55 by rsoo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -I
INCDIR = ./includes/
HEAD = ft.h
SRCDIR = ./srcs/
CFILES = ft_calc.c ft_atoi.c operators.c put.c main.c 
FUNCNAME = do-op
SRC = $(addprefix $(SRCDIR), $(CFILES))
HEADS = $(addprefix $(INCDIR), $(HEAD))

OBJ = $(SRC:.c=.o)

all: $(FUNCNAME)

$(OBJ): $(SRCDIR)%.o: $(SRCDIR)%.c $(HEADS)
	$(CC) $(CFLAGS) $(INCDIR) -c $< -o $@

$(FUNCNAME): $(OBJ)
	$(CC) -o $(FUNCNAME) $(OBJ)

clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(FUNCNAME)

re: fclean all

.PHONY: clean fclean re
