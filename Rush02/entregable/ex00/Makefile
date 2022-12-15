# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fermarti <fermarti@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 22:48:24 by fermarti          #+#    #+#              #
#    Updated: 2022/10/30 23:30:59 by fermarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS=-Werror -Wall -Wextra
rush-02: main.c atoi.c dict_read.c extract_numbers.c print.c split.c validate.c
	$(CC) $(CFLAGS) -o rush-02 main.c atoi.c dict_read.c extract_numbers.c print.c split.c validate.c
.PHONY: fclean
fclean:
	find . ! \( -name 'Makefile' -o -name 'main.c' -o -name 'atoi.c' -o -name 'dict_read' -o -name 'extract_numbers.c' -o -name 'print.c' -o -name 'split.c' -o -name 'validate.c' -o -name 'structure.h'\) -type f -exec rm -f {} +
.PHONY: clean
clean:
	find . ! \( -name 'Makefile' -o -name 'main.c' -o -name 'atoi.c' -o -name 'dict_read' -o -name 'extract_numbers.c' -o -name 'print.c' -o -name 'split.c' -o -name 'validate.c' -o -name 'structure.h'\) -type f -exec rm -f {} +




