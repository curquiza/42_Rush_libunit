# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: curquiza <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/16 17:08:05 by curquiza          #+#    #+#              #
#    Updated: 2017/02/11 20:57:00 by curquiza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = tests

CC = gcc -Wall -Wextra -Werror

INCL_FLAG = -I includes -I $(LIB_DIR)/includes -I $(UNIT_DIR)

SRC = main.c \
	 00_launcher.c \
	 01_ok.c \
	 02_ko.c \
	 03_segflt.c \
	 04_buse.c

OBJ = $(SRC:%.c=%.o)

LIB = $(LIB_DIR)/libft.a
LIB_DIR = ../framework/libft
LIB_FLAG = -L$(LIB_DIR) -lft

UNIT = $(UNIT_DIR)/libunit.a
UNIT_DIR = ../framework
UNIT_FLAG = -L$(UNIT_DIR) -lunit

all : $(NAME)

test : $(NAME)
	./$(NAME)

$(UNIT) :
	@make -C $(UNIT_DIR)
	@echo "\033[1;31m--------------------------\033[0m"

$(NAME) : $(UNIT) $(OBJ)
	@$(CC) $(OBJ) -o $@ $(LIB_FLAG) $(UNIT_FLAG)
	@echo "\033[1;31m--------------------------\033[0m"
	@echo "Make $@ : \033[1;32mOK\033[0m"

%.o: %.c
	@$(CC) -o $@ -c $< $(INCL_FLAG)
	@echo "Make $@ : \033[1;32mOK\033[0m"

clean :
	@make clean -C $(UNIT_DIR)
	@echo "Make $@_libunit & $@_libft : \033[1;33mOK\033[0m"
	@rm -f $(OBJ)
	@echo "Make $@ : \033[1;32mOK\033[0m"

fclean : clean
	@make fclean -C $(UNIT_DIR)
	@echo "Make $@_libunit & $@_libft : \033[1;33mOK\033[0m"
	@rm -f $(NAME)
	@echo "Make $@ : \033[1;32mOK\033[0m"

re : fclean all
