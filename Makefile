# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abastard <abastard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/29 11:17:38 by abastard          #+#    #+#              #
#    Updated: 2024/08/21 12:22:00 by abastard         ###   ########.fr        #
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
							./ft_swap/order.c \
							./ft_libft/ft_isalpha.c \
							./ft_libft/ft_isdigit.c \
							./ft_libft/ft_isalnum.c \
							./ft_libft/ft_isascii.c \
							./ft_libft/ft_isprint.c \
							./ft_libft/ft_strlen.c \
							./ft_libft/ft_toupper.c \
							./ft_libft/ft_tolower.c \
							./ft_libft/ft_atoi.c \
							./ft_libft/ft_memset.c \
							./ft_libft/ft_bzero.c \
							./ft_libft/ft_memcpy.c \
							./ft_libft/ft_strlcpy.c \
							./ft_libft/ft_memmove.c \
							./ft_libft/ft_strlcat.c \
							./ft_libft/ft_strchr.c \
							./ft_libft/ft_strrchr.c \
							./ft_libft/ft_strncmp.c \
							./ft_libft/ft_memchr.c \
							./ft_libft/ft_memcmp.c \
							./ft_libft/ft_strnstr.c \
							./ft_libft/ft_calloc.c \
							./ft_libft/ft_strdup.c \
							./ft_libft/ft_substr.c \
							./ft_libft/ft_strjoin.c \
							./ft_libft/ft_strtrim.c \
							./ft_libft/ft_split.c \
							./ft_libft/ft_itoa.c \
							./ft_libft/ft_strmapi.c \
							./ft_libft/ft_striteri.c \
							./ft_libft/ft_putchar_fd.c \
							./ft_libft/ft_putstr_fd.c \
							./ft_libft/ft_putnbr_fd.c \
							./ft_libft/ft_putendl_fd.c \
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
		$(RM) $(OBJS)
		./main.out
		$(RM) main.out
		
	
do: re main clean	
		$(RM) $(OBJS)

all: $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)
		$(RM) main.out

re: 	fclean all

.PHONY: all clean fclean re main run