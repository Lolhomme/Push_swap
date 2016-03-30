# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alaulom <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/28 16:51:28 by alaulom           #+#    #+#              #
#    Updated: 2016/03/30 18:36:14 by alaulom          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = main.c\
	  struct.c\
	  fill_start.c\
	  ps_swap.c\
	  ps_pass.c\
	  ps_rot.c\
	  ps_rotr.c\
	  ps_tri.c

OBJ = $(SRC:.c=.o)

BUILTIN = ft_cd\

LIB_PATH = ./libft/
LIB_NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra

RM = rm
RFLAGS = -rf

includesdir = ./includes
lib_includesdir = ./libft/includes/

all: $(NAME)

$(NAME): $(OBJ)
	@$(MAKE) -C $(LIB_PATH)
	@printf 'Compiling ./%s binaries : [\033[32mDONE\033[0m]\n' '$(NAME)'
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIB_PATH)$(LIB_NAME) -g
	@printf 'Compiling ./%s : [\033[32mDONE\033[0m]\n' '$(NAME)'

%.o: ./src/%.c
	@$(CC) $(CFLAGS) -c $^ -I $(includesdir) -I $(lib_includesdir)

test:
	@echo "\nGestion d'erreur"
	@echo "\n- non digit arg:"
	./push_swap -ca 67 a 8 2
	@echo "\n- doublon arg:"
	./push_swap -ca 7 3 8 2 1 2 9 6
	@echo "\n- int Over Flow test:"
	./push_swap -ca 2147483647 2147483646 2147483648
	@echo "\n"
	./push_swap -ca 2147483647 432 2 980
	@echo "\n"
	./push_swap -ca -2147483648 324 -2147483649
	@echo "\n"
	./push_swap -ca -2147483648 57483 43 1 890
	@echo "\nPile vide"
	./push_swap -ca 
	@echo "\nPile avec 1"
	./push_swap -ca 1
	@echo "\nPile avec alea"
	./push_swap -ca 9 2 7 8 2 3 5 1
	@echo "\nPile avec nega"
	./push_swap -ca -9 -5 -7 -8 -2 -3 -5 -1
	@echo "\nPile 3 elem odre inverse (2 MAX)"
	./push_swap -ca 3 2 1
	@echo "\n2 premier inverse (JUSTE 1 SWAP)"
	./push_swap -ca 2 1 3 4 5 6 7 8 9 10
	@echo "\n2 dernier inverse(8 MAX)"
	./push_swap -ca 1 2 3 4 5 6 7 8 10 9
	@echo "\n\n"
	./push_swap -ca 1 2 3
	@echo "\n"
	./push_swap -ca 1 3 2
	@echo "\n"
	./push_swap -ca 2 1 3
	@echo "\n"
	./push_swap -ca 2 3 1
	@echo "\n"
	./push_swap -ca 3 1 2
	@echo "\n"
	./push_swap -ca 3 2 1

clean:
	@$(RM) $(RFLAGS) $(OBJ)
	@printf 'Clean %s : [\033[32mDONE\033[0m]\n' '$(NAME)'
	@$(MAKE) clean -C $(LIB_PATH)

fclean: clean
	@$(RM) $(RFLAGS) $(NAME)
	@printf 'Fclean %s : [\033[32mDONE\033[0m]\n' '$(NAME)'
	@$(MAKE) fclean -C $(LIB_PATH)

re : fclean all

.PHONY: all clean fclean re
