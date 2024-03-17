# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brogalsk <brogalsk@student.42warsaw.p      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/16 13:22:45 by brogalsk          #+#    #+#              #
#    Updated: 2024/03/17 11:44:49 by brogalsk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS = ft_printf.c  
OBJ = $(SRCS:.c = .o)

all: $(NAME)
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
clean:
	rm -rf $(OBJ)
fclean: clean
	rm -rf $(NAME)
re: fclean $(NAME)

.PHONY: all clean fclean re

