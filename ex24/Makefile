# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chlimous <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 16:13:14 by chlimous          #+#    #+#              #
#    Updated: 2023/10/30 16:15:52 by chlimous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

NAME = libft.a

OBJS = ${SRCS:.c=.o}

CC = gcc

.c.o:
	${CC} -I./includes -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
	ar rc ${NAME} ${OBJS}

all : ${NAME}

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re
