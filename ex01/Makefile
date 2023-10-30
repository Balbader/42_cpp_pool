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

########
# NAME #
########
NAME = phonebook

###############
# INGREDIENTS #
###############
INC_DIR				:=	./inc/

SRCS_DIR			:=	./srcs/
SRCS				:=	\
						contact.cpp \
						phonebook.cpp \
						main.c
SRCS				:=	$(SRCS:%=$(SRCS_DIR)/%)

BUILD_DIR			:=	.build
OBJS				:=	$(SRCS:$(SRCS_DIR)/%.c=$(BUILD_DIR)/%.o)
DEPS				:=	$(OBJS:.o=.d)

CC					:=	c++ -o
CFLAGS				:=	-Wall -Wextra -Werror -std=c++98
IFLAGS				:=	$(addprefix -I, $(INC_DIR))

RM					:=	rm -rf
DIR_DUP				=	mkdir -p $(dir $@)

##########
# COLORS #
##########
RED     			:= \033[0;31m
GREEN   			:= \033[0;32m
YELLOW  			:= \033[0;33m
RESET   			:= \033[0m

###########
# RECIPES #
###########
all: $(NAME)

$(NAME): $(OBJS)
	@echo "[" "$(YELLOW)..$(RESET)" "] | Compiling $(NAME)..."
	@$(CC) $(CFLAGS) -c $(OBJS) -o $(NAME)
	@echo "[" "$(GREEN)OK$(RESET)" "] | $(NAME) ready!"

$(BUILD_DIR)/%.o: $(SRCS_DIR)/%.cpp
	@$(DIR_DUP)
	@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $(<:.cpp=.o)

-include $(DEPS)

clean:
	@echo "[" "$(YELLOW)..$(RESET)" "] | Removing object files...$(RESET)"
	@$(RM) $(BUILD_DIR) $(DEPS)
	@$(RM) $(OBJS)
	@echo "[" "$(GREEN)OK$(RESET)" "] | Object files removed."

fclean: clean
	@echo "[" "$(YELLOW)..$(RESET)" "] | Removing binary files...$(RESET)"
	@$(RM) $(NAME)
	@echo "[" "$(GREEN)OK$(RESET)" "] | Binary file removed."
re:
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all clean fclean re
