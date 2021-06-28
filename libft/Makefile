# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mahmad-j <mahmad-j@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/28 07:47:39 by mahmad-j          #+#    #+#              #
#    Updated: 2021/06/28 07:56:04 by mahmad-j         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isdigit.c ft_putchar.c
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