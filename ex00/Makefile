# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baalbade <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 16:30:51 by baalbade          #+#    #+#              #
#    Updated: 2023/10/17 16:30:53 by baalbade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#
NAME = megaphone
CC = c++ -o
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRC = megaphone.cpp
OBJS = $(SRC:.cpp=.o)

.c.o:
	$(CC) $(CFLAGS) -c $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
