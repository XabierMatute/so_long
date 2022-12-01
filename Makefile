# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 11:58:22 by xmatute-          #+#    #+#              #
#    Updated: 2022/12/01 12:06:13 by xmatute-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

$(NAME) = so_long

CC 		:= gcc
CFLAGS 	:= -Wall -Werror -Wextra

RM 		:= rm -rf

SANI 	:= -fsanitize=address -g3
val 	:=  valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes

all : $(NAME)

$(NAME) : 
	make -C ft_printf
	$(CC) $(CFLAGS) main.c ft_printf/libftprintf.a  -o server

clean :
		$(RM) $(NAME)

fclean : clean
		make fclean -C ft_printf
		$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re