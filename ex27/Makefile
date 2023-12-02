# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chlimous <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 16:13:14 by chlimous          #+#    #+#              #
#    Updated: 2023/10/30 17:40:54 by chlimous         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.c

NAME = ft_display_file

OBJS = ${SRCS:.c=.o}

CC = gcc

.c.o:
	${CC} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
	${CC} ${OBJS} -o ${NAME}

all : ${NAME}

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}

.PHONY : all clean fclean
