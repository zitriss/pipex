# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlize <tlize@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/24 14:40:07 by tlize             #+#    #+#              #
#    Updated: 2025/03/24 15:56:59 by tlize            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#
NAME	= pipex

SRCS	=src/pipex.c src/pipex_utils.c src/errors.c
OBJS	= ${SRCS:.c=.o}
MAIN	= src/pipex.c

HEADER = -Iincludes

CC	= cc
CFLAGS	= -Wall -Werror -Wextra

.c.o:	%.o : %.c
			@cc ${CFLAGS} ${HEADER} -c %< -o $(v:.c=.o)

all:	${PROG}

${PROG}:	${OBJS}
			@make re -C ./libft
			@$(CC) ${OBJS} -Llibft -lft -o ${PROG}

clean :
			@make clean -C ./libft
			@rm -f ${OBJS}

fclean :	clean
			@make fclean -C ./libft
			@rm -f ${NAME}
			@rm -f ${PROG}

re :		flclean all

.PHONY: all clean fclean re
