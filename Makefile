#--STANDARD--
NAME	= push_swap
CFLAGS	= -Wall -Wextra -Werror -g3
OBJ_D	= ./objects

#--MANDATORY--
SRC_D	= ./src/
SRC		= arg_check.c init_fct.c main.c push.c radix_sort.c rotate.c rrotate.c small_sort.c \
		swap.c utils.c
OBJ		= $(addprefix $(OBJ_D)/, $(SRC:.c=.o))

#--LIBFT--
LIB		= $(addprefix $(LPATH)/, libft.a)
LPATH	= ./Libft/

all: $(NAME)

$(NAME): $(LIB) $(OBJ)
	cc $(OBJ) $(LIB) $(CFLAGS) -o $(NAME)

$(LIB): 
	$(MAKE)	-C $(LPATH)

$(OBJ_D)/%.o: $(SRC_D)/%.c
	mkdir -p $(OBJ_D)
	cc -c $< -o $@

clean:
	rm -rf $(OBJ_D)

fclean: clean
	rm -rf $(NAME)

re: fclean all