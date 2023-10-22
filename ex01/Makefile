# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/22 15:05:49 by baalbade          #+#    #+#              #
#    Updated: 2023/10/22 15:05:51 by baalbade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CC = c++ -o
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SRC = phonebook.cpp
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
