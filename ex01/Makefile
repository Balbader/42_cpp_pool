# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baalbade <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 11:20:39 by baalbade          #+#    #+#              #
#    Updated: 2023/10/30 11:20:41 by baalbade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

########
# NAME #
########
NAME		:=	phonebook

###############
# INGREDIENTS #
###############
INC_DIR		:=	./inc/
SRCS_DIR	:=	./srcs/
SRCS_FILES	:=	\
				contactClass.cpp \
				phonebookClass.cpp \
				main.cpp
SRCS		:=	$(addprefix $(SRCS_DIR), $(SRCS_FILES))

BUILD_DIR	:=	.build
OBJS		:=	$(SRCS:$(SRCS_DIR)/%.cpp=$(BUILD_DIR)/%.o)
DEPS		:=	$(OBJS:.o=.d)

CC			:=	c++ -o
CFLAGS		:=	-Wall -Wextra -Werror -std=c++98
IFLAGS		:=	$(addprefix -I, $(INC_DIR))

RM			:=	rm -rf
DIR_DUP		=	mkdir -p $(dir $@)

##########
# COLORS #
##########

RED			:=	\033[0;31m
GREEN		:=	\033[0;32m
YELLOW		:=	\033[0;33m
RESET		:=	\033[0;0m

###########
# RECIPES #
###########
all: $(NAME)

$(NAME): $(OBJS)
