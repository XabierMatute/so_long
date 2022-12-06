# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 11:58:22 by xmatute-          #+#    #+#              #
#    Updated: 2022/12/06 21:34:22 by xmatute-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := so_long

SRC :=	main.c  \
		Errors/error_argc.c         \
		Errors/error_dotber.c      	\
		Errors/error_unreadable.c  	\
		Errors/error_invalidchar.c 	\
		Errors/error_charnum.c     	\
		Errors/error_rectangle.c   	\
		Errors/error_closed.c		\
		Errors/error_path.c			\
		Parse/argvparse.c \
		Parse/mapparse.c  \
		Parse/map/invalidchar.c \
		Parse/map/charnum.c     \
		Parse/map/rectangle.c   \
		Parse/map/closed.c      \
		Parse/map/path.c		\
		utils/getmap.c  \
		utils/linelen.c \
		utils/p.c		\
		utils/mapend.c
		
OBJ := $(SRC:%.c=%.o)

SANI 	:= -fsanitize=address -g3

CC 		:= gcc
CFLAGS 	:= -Wall -Werror -Wextra 
# CFLAGS 	:= -Wall -Werror -Wextra $(SANI)

RM 		:= rm -rf

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