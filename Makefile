# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlize <tlize@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/24 14:40:07 by tlize             #+#    #+#              #
#    Updated: 2025/03/25 12:53:57 by tlize            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pipex

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCDIR = src
INCDIR = includes
LIBFTDIR = libft

LIBFT = $(LIBFTDIR)/libft.a
LIBFT_INC = -I$(LIBFTDIR)
LIBFT_LNK = -L$(LIBFTDIR) -lft

SRCS = $(SRCDIR)/main.c $(SRCDIR)/errors.c $(SRCDIR)/pipex_utils.c
OBJS = $(SRCS:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	@$(MAKE) -C $(LIBFTDIR)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) -I$(INCDIR) $(LIBFT_INC) $(OBJS) $(LIBFT_LNK) -o $(NAME)

clean:
	$(MAKE) -C $(LIBFTDIR) clean
	rm -f $(OBJS)

fclean: clean
	$(MAKE) -C $(LIBFTDIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

