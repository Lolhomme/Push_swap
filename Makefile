# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alaulom <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/31 17:04:37 by alaulom           #+#    #+#              #
#    Updated: 2016/03/31 17:04:40 by alaulom          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

STATIC_EXE	= push_swap

SRC		=	main.c				\
			do_s.c				\
			do_p.c				\
			do_r.c				\
			do_rr.c				\
			do_all.c			\
			trie1.c				\
			print_stack.c		\
			get_opt.c			\
			print.c				\
			error_handling.c	\
			is_sort.c

STATIC_OBJ	= $(patsubst %.c,$(STATIC_DIR)/%.o,$(SRC))

HEAD_DIR	= includes
SRC_DIR		= src
STATIC_DIR	= static
LIBFT_STATIC= libft/libft.a
LIBFT_HEAD	= libft/includes/

CC			= gcc
FLAGS		= -Wall -Wextra -Werror

all: $(STATIC_EXE)

$(STATIC_EXE): $(STATIC_OBJ) $(LIBFT_STATIC)
	$(CC) -O3 -I $(HEAD_DIR) -I $(LIBFT_HEAD) -o $@ $(STATIC_OBJ) $(LIBFT_STATIC) $(FLAGS)

$(STATIC_DIR)/%.o: $(SRC_DIR)/%.c $(LIBFT)
	$(CC) -O3 -I $(HEAD_DIR) -I $(LIBFT_HEAD) -o $@ -c $< $(FLAGS)

$(LIBFT_STATIC):
	@make -C libft/ libft.a

.PHONY: clean fclean re debug norme normeLibft test

clean:
	@make -C libft clean
	@rm -f $(STATIC_OBJ)

fclean: clean
	@make -C libft fclean
	@rm -f $(STATIC_EXE)

normeLibft:
		@make -C libft norme

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

re: fclean
	make
