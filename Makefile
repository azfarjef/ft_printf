# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/27 23:26:41 by mahmad-j          #+#    #+#              #
#    Updated: 2021/10/06 08:51:27 by mahmad-j         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	./libft/ft*.c ./source/ft*.c
OBJ			=	ft*.o

LIB_PATH	=	./libft
INCLUDES	=	./includes

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -c
NAME	=	libftprintf.a

all		:	$(NAME)

$(NAME)	:
			make re -C $(LIB_PATH)
			$(CC) -g3 $(CFLAGS) $(SRC) -I$(INCLUDES)
			ar rc $(NAME) $(OBJ) $(LIB_PATH)/*.o
			ranlib $(NAME)

bonus	:	re

clean	:
			rm -f $(OBJ)
			make clean -C $(LIB_PATH)

fclean	:	clean
			make clean -C $(LIB_PATH)
			rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re