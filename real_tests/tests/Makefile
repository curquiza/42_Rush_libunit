# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: curquiza <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/16 17:08:05 by curquiza          #+#    #+#              #
#    Updated: 2017/02/12 18:12:17 by curquiza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = tests

CC = gcc -Wall -Wextra -Werror

INCL_FLAG = -I $(PROJ_DIR)/includes -I $(LIB_DIR)/includes -I $(UNIT_DIR)  \
			-I ft_itoa \
			-I ft_strjoin \
			-I ft_countwords

SRC = main.c \
	  ft_itoa/00_launcher.c \
	  ft_itoa/01_smallnbr_1.c \
	  ft_itoa/02_smallnbr_2.c \
	  ft_itoa/03_mediumnbr.c \
	  ft_itoa/04_limitinf.c \
	  ft_itoa/05_limitsup.c \
	  ft_itoa/06_zero.c \
	  ft_itoa/07_smallnbr_neg.c \
	  ft_itoa/08_mediumnbr_neg.c \
	  ft_strjoin/00_launcher.c \
	  ft_strjoin/01_basic_test.c \
	  ft_strjoin/02_big_lines.c \
	  ft_strjoin/03_empty_ok.c \
	  ft_strjoin/04_ok_empty.c \
	  ft_strjoin/05_null_ok.c \
	  ft_strjoin/06_ok_null.c \
	  ft_strjoin/07_nulls.c \
	  ft_strjoin/08_empty.c \
	  ft_countwords/00_launcher.c \
	  ft_countwords/01_basic_test_1.c \
	  ft_countwords/02_basic_test_2.c \
	  ft_countwords/03_basic_test_3.c \
	  ft_countwords/04_emptyline.c \
	  ft_countwords/05_emptychar.c \
	  ft_countwords/06_bothempty.c \
	  ft_countwords/07_null.c

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
	@rm -f $(OBJ)

fclean : clean
	@make fclean -C $(UNIT_DIR)
	@rm -f $(NAME)

re : fclean all
