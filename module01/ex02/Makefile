# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baalbade <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 13:19:27 by baalbade          #+#    #+#              #
#    Updated: 2023/11/17 13:19:29 by baalbade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := zombie

CC          := c++
CFLAGS      := -Wall -Wextra -Werror -g3 -std=c++98

RM          := rm -f
MAKEFLAGS   += --no-print-directory
DIR_DUP     = mkdir -p $(@D)

all: $(NAME)

$(NAME): 
	$(CC) $(FLAGS) main.cpp -o $(NAME)
	$(info $(NAME) created.)

clean:
	$(RM) $(NAME)

fclean:
	$(RM) $(NAME)

re: clean all

.PHONY: clean fclean re

.SILENT:
