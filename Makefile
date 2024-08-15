# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abastard <abastard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/29 11:17:38 by abastard          #+#    #+#              #
#    Updated: 2024/08/15 12:49:02 by abastard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = pushswap.a

SRC =	./ft_printf/ft_aux.c ./ft_printf/ft_character_pf.c \
							./ft_printf/ft_hex_pf.c \
							./ft_printf/ft_pointer_pf.c \
							./ft_printf/ft_printf.c \
							./ft_printf/ft_putint_pf.c \
							./ft_printf/ft_putnbr_pf.c \
							./ft_printf/ft_string_pf.c \
							./ft_swap/insert.c \
							./ft_swap/pa.c \
							./ft_swap/pb.c \
							./ft_swap/rr.c \
							./ft_swap/rrr.c \
							./ft_swap/rrx.c \
							./ft_swap/rx.c \
							./ft_swap/ss.c \
							./ft_swap/sx.c \
							./ft_swap/deallocate.c \
							./ft_swap/deallocate_first.c \
							./ft_split.c \
							./push_swap.c 
							

OBJS = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
AR = ar crs

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

main: all
		$(CC) main.c $(NAME) -o main.out

run: re main clean
		./main.out
		$(RM) main.out
		

all: $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)
		$(RM) main.out

re: 	fclean all

.PHONY: all clean fclean re main run