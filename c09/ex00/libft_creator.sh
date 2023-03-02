# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsoo <rsoo@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/26 12:43:25 by rsoo              #+#    #+#              #
#    Updated: 2023/02/26 12:43:31 by rsoo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -Wall -Wextra -Werror -c ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rcs libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

# Notes
# -c flag with gcc = compile source code file into an object file

# ar is a command-line utility that is used to create, modify, and extract static library 
# archives in Unix-like operating systems

# The rcs options are used with the ar command to create a new library or modify an existing 
# one. The r option is used to replace or add files to the archive. The c option is used to 
# create the archive if it does not already exist. The s option is used to add an index to the 
# library, which can speed up linking time for large libraries.