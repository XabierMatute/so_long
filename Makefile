# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 11:58:22 by xmatute-          #+#    #+#              #
#    Updated: 2022/12/01 17:30:09 by xmatute-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := so_long

SRC := main.c  Errors/error_argc.c
OBJ := $(SRC:%.c=%.o)

LIB := ./ft_printf

CC 		:= gcc
# CFLAGS 	:= -Wall -Werror -Wextra

RM 		:= rm -rf

SANI 	:= -fsanitize=address -g3
val 	:=  valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes


all : $(NAME)

$(NAME) : $(OBJ)
	make -C $(LIB)
	$(CC) $(CFLAGS) $(OBJ) $(LIB)/*.a  -o $(NAME)

clean :
		$(RM) $(OBJ)
		make clean -C $(LIB)

fclean : clean
		make fclean -C $(LIB)
		$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re flagless