# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 11:58:22 by xmatute-          #+#    #+#              #
#    Updated: 2022/12/01 14:02:06 by xmatute-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := so_long

SRC := main.c  $(wildcards Errors/*.c)
OBJ := $(SRC:.c=.o)

LIBS := ./ft_printf

CC 		:= gcc
#CFLAGS 	:= -Wall -Werror -Wextra

RM 		:= rm -rf

SANI 	:= -fsanitize=address -g3
val 	:=  valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes


all : $(NAME)

$(NAME) : $(OBJ)
	make -C ft_printf
	$(CC) $(CFLAGS) $(OBJ) $(LIBS)/*.a  -o $(NAME)

clean :
		$(RM) $(OBJ)
		make clean -C $(LIBS)

fclean : clean
		make fclean -C $(LIBS)
		$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re flagless