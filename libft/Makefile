# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/28 07:47:39 by mahmad-j          #+#    #+#              #
#    Updated: 2021/07/27 06:59:24 by mahmad-j         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isdigit.c ft_putchar.c \
				ft_putstr.c ft_strcmp.c ft_strcpy.c ft_strlen.c ft_strncpy.c \
				ft_strnew.c ft_putnchar.c
OBJ			=	$(SRC:%.c=%.o)
INCLUDES	=	./
NAME		=	libft.a

CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra -c
all		:	$(NAME)

$(NAME)	:
			$(CC) $(CFLAGS) -g3 $(SRC) -I$(INCLUDES)
			ar rc $(NAME) $(OBJ)
			ranlib $(NAME)

clean	:
			rm -f $(OBJ)

fclean	:	clean
			rm -f $(NAME)
			
re		:	fclean all

.PHONY	:	all clean fclean re