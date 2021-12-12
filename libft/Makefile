# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaskour <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/12 11:36:13 by yaskour           #+#    #+#              #
#    Updated: 2021/12/12 12:48:15 by yaskour          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
cc = gcc
flags = -Wall -Wextra -Werror
srcs = 	ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putnbr_fd.c \
		ft_strlcpy.c


objs = $(srcs:.c=.o)



all: $(NAME)

%.o: %.c libft.h
	@$(cc) $(flags) -c $< -o $@ -I libft.h

$(NAME): $(objs)
	@ar -rc $(NAME) $(objs)
clean :
	@rm -rf $(objs) 
fclean : clean
	@rm -rf $(NAME)	

re: fclean all

.PHONY: all clean fclean re
