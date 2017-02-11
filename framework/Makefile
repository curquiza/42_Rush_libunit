NAME = libunit.a

FLAG = -Wall -Wextra -Werror
CC = gcc $(FLAG)

SRC = launch_tests.c \
	  load_test.c

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
	@echo "Make $@_libft : \033[1;33mOK\033[0m"
	@rm -f $(OBJ)
	@echo "Make $@_libunit : \033[1;33mOK\033[0m"

fclean : clean
	@make fclean -C $(LIB_DIR)
	@echo "Make $@_libft : \033[1;33mOK\033[0m"
	@rm -f $(NAME)
	@echo "Make $@_libunit : \033[1;33mOK\033[0m"

re : fclean all
