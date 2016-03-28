# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 15:44:25 by jponcele          #+#    #+#              #
#    Updated: 2013/12/27 12:40:59 by jponcele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_putendl.c\
	  ft_putchar.c\
	  ft_putstr.c\
	  ft_strlen.c\
	  ft_dlstprint.c\
	  ft_dlstrprint.c\
	  ft_dlstnew.c\
	  ft_dlstdelone.c\
	  ft_dlstdel.c\
	  ft_dlstdup.c\
	  ft_dlstaddfront.c\
	  ft_dlstaddend.c\
	  ft_dlstisempty.c\
	  ft_putnbrendl.c\
	  ft_putnbr.c\
	  ft_atoi.c\
	  ft_isdigit.c\
	  ft_putctab.c\
	  ft_strdup.c\
	  ft_strcpy.c\
	  ft_strequ.c

OBJ = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra

AR = ar
ARFLAGS = -rc

RM = rm
RMFLAGS = -rf

includesdir = ./includes/

all: $(NAME)

$(NAME): $(OBJ)
	@printf 'Compiling %s binaries : [\033[32mDONE\033[0m]\n' '$(NAME)'
	@$(AR) $(ARFLAGS) $(NAME) $(OBJ)
	@ranlib $(NAME)
	@printf 'Compiling %s : [\033[32mDONE\033[0m]\n' '$(NAME)'

%.o: ./src/%.c
	@$(CC) $(CFLAGS) -c $^ -I $(includesdir)

clean:
	@$(RM) $(RMFLAGS) $(OBJ)
	@printf 'Clean %s : [\033[32mDONE\033[0m]\n' '$(NAME)'

fclean: clean
	@$(RM) $(RMFLAGS) $(NAME)
	@printf 'Fclean %s : [\033[32mDONE\033[0m]\n' '$(NAME)'

re: fclean all

.PHONY: all clean fclean re
