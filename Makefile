# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 11:58:22 by xmatute-          #+#    #+#              #
#    Updated: 2022/12/02 22:08:06 by xmatute-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := so_long

SRC :=	main.c  \
		Errors/error_argc.c       \
		Errors/error_dotber.c     \
		Errors/error_unreadable.c \
		Parse/argvparse.c \
		Parse/mapparse.c \
		utils/getmap.c \
		
OBJ := $(SRC:%.c=%.o)

CC 		:= gcc
CFLAGS 	:= -Wall -Werror -Wextra

RM 		:= rm -rf

SANI 	:= -fsanitize=address -g3
val 	:=  valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes


all : $(NAME)

$(NAME) : $(OBJ)
	make -C libft
	make -C ft_printf
	$(CC) $(CFLAGS) $(OBJ) ft_printf/libftprintf.a libft/libft.a -o $(NAME)

clean :
		$(RM) $(OBJ)
		make clean -C libft
		make clean -C ft_printf

fclean : clean
		make fclean -C libft
		make fclean -C ft_printf
		$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re