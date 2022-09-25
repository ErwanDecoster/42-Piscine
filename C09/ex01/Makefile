# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edecoste <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 14:41:38 by edecoste          #+#    #+#              #
#    Updated: 2022/09/22 17:36:10 by edecoste         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS		= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

HEADERS		= include/ft.h

OBJS		= ${SRCS:.c=.o}

CFLAGS		=  -Wall -Wextra -Werror

NAME		= libft.a

CC			= cc

RM			= rm -f

%.o:		%.c ${HEADERS}
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}
fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re 
