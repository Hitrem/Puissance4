# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/01 18:50:57 by raudiber          #+#    #+#              #
#    Updated: 2014/03/07 22:34:29 by raudiber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = puissance4 
LIBFT = libft.a
LIBFT_PATH = libft

CC = gcc
CFLAGS = -Wall -Wextra -Werror $(HEADERS)
HEADERS = -Iincludes -Ilibft/includes

LDFLAGS = -L$(LIBFT_PATH) -lft

PATH_INC = -Iincludes -Ilibft/includes
PATH_SRC = ./srcs/

SRC = main.c \
		ft_errors.c \
		ft_grid.c \
		ft_print_grid.c

SRCS = $(addprefix $(PATH_SRC), $(SRC))
OBJS = $(addprefix $(PATH_SRC), $(SRC:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT_PATH)
	$(CC) $(OBJS) -o $@ $(LDFLAGS)

$(PATH_SRC)%.o: $(PATH_SRC)%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	$(MAKE) -C $(LIBFT_PATH) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_PATH) fclean
	rm -f $(LIBFT_PATH)/$(LIBFT)

re: fclean all

.PHONY: clean fclean re
