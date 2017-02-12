NAME = libunit.a

FLAG = -Wall -Wextra -Werror
CC = gcc $(FLAG)

SRC = launch_tests.c \
	  load_test.c \
	  display.c

OBJ = $(SRC:%.c=%.o)

LIB = $(DIR_LIB)/libft.a
LIB_DIR = libft
#LIB_FLAG = -L$(LIB_DIR) -lft

INCL_FLAG = -I $(LIB_DIR)/includes

all : $(LIB) $(NAME)

$(LIB) :
	@make -C $(LIB_DIR)

$(NAME) : $(OBJ) 
	@ar rc $@ $(OBJ)
	@ranlib $@
	@echo "Make $@ : \033[1;33mOK\033[0m"

%.o : %.c
	@$(CC) -c $< $(INCL_FLAG) -o $@

clean :
	@make clean -C $(LIB_DIR)
	@rm -f $(OBJ)

fclean : clean
	@make fclean -C $(LIB_DIR)
	@rm -f $(NAME)

re : fclean all
