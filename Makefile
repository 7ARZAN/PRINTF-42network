# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elakhfif <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 22:27:42 by elakhfif          #+#    #+#              #
#    Updated: 2022/10/26 03:40:13 by elakhfif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc
INC = ft_printf.h
SRC = 	ft_printf.c\
		ft_putaddrs.c\
		ft_putchar.c\
		ft_putnbr.c\
		ft_putnbr_base.c\
		ft_putstr.c\
		ft_putnbr_unsigned.c\

OBJ = $(SRC:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJ)
		ar rc $(NAME) $(OBJ)

%.o : %.c $(INC)
		gcc -c $(CFLAGS) $< -o $@

clean :
		@rm -rf $(OBJ)

fclean :
		@rm -f $(NAME) $(OBJ)

re : fclean all
