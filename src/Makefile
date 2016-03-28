# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alaulom <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/28 16:56:31 by alaulom           #+#    #+#              #
#    Updated: 2016/03/28 16:56:34 by alaulom          ###   ########.fr        #
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
