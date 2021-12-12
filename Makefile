# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaskour <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/11 11:39:12 by yaskour           #+#    #+#              #
#    Updated: 2021/12/12 14:42:53 by yaskour          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME =libftprintf.a
FLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c \
	   us_putnbr.c \
	   ft_hex.c \
	   ft_add.c

OBJS = $(SRCS:.c=.o)

all:$(NAME)

$(NAME): $(OBJS)
	@make -C ./libft
	@mv ./libft/libft.a ./$(NAME)
	@ar -rc $(NAME) $(OBJS) 

%.o : %.c ft_printf.h
	@$(CC) $(FLAGS) -c $< -o $@ -I ft_printf.h

clean:
	@rm -rf $(OBJS)
	@rm -rf ./libft/*.o

fclean: clean
	@rm -rf *.a

re: fclean all 

.PHONY: all fclean clean re
