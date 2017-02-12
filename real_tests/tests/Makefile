# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: curquiza <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/16 17:08:05 by curquiza          #+#    #+#              #
#    Updated: 2017/02/12 13:10:57 by curquiza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = tests

CC = gcc -Wall -Wextra -Werror

INCL_FLAG = -I $(PROJ_DIR)/includes -I $(LIB_DIR)/includes -I $(UNIT_DIR)  \
			-I ft_itoa

SRC = main.c \
	  ft_itoa/00_launcher.c \
	  ft_itoa/01_smallnbr_1.c \
	  ft_itoa/02_smallnbr_2.c \
	  ft_itoa/03_mediumnbr.c \
	  ft_itoa/04_limitinf.c \
	  ft_itoa/05_limitsup.c \
	  ft_itoa/06_zero.c \
	  ft_itoa/07_smallnbr_neg.c \
	  ft_itoa/08_mediumnbr_neg.c

OBJ = $(SRC:%.c=%.o)

LIB_DIR = ../../framework/libft
LIB = $(LIB_DIR)/libft.a
LIB_FLAG = -L$(LIB_DIR) -lft

UNIT_DIR = ../../framework
UNIT = $(UNIT_DIR)/libunit.a
UNIT_FLAG = -L$(UNIT_DIR) -lunit

PROJ_DIR = ..
PROJ = $(PROJ_DIR)/libft_tests.a
PROJ_FLAG = -L$(PROJ_DIR) -lft_tests

all : $(NAME)

$(UNIT) :
	@make -C $(UNIT_DIR)
	@echo "\033[1;31m--------------------------\033[0m"

$(NAME) : $(UNIT) $(OBJ)
	@$(CC) $(OBJ) -o $@ $(PROJ_FLAG) $(LIB_FLAG) $(UNIT_FLAG) 
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
