# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baalbade <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 07:58:15 by baalbade          #+#    #+#              #
#    Updated: 2023/10/30 07:58:17 by baalbade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	phonebook
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm
SRC		=	main.cpp contact.cpp phonebook.cpp
OBJS	=	$(SRC:.cpp=.o)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all:		$(NAME)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
