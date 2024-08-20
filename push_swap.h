/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:27:48 by abastard          #+#    #+#             */
/*   Updated: 2024/08/19 08:53:26 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PUSHSWAP
# define FT_PUSHSWAP
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <stdio.h>
# include <limits.h>
# include <stdbool.h>

# define HEX_UP_BASE "0123456789ABCDEF"
# define HEX_LOW_BASE "0123456789abcdef"
# define DECIMAL "0123456789"

typedef struct Node
{
    int x;
    struct Node* next;
    struct Node* prev;
} Node;


void    push_swap(char *str, ...);
int		ft_printf(char const *str, ...);
size_t	ft_strlen(const char *str);

/* format functions */
void	ft_character_pf(char c, size_t *counter);
void	ft_string_pf(char *str, size_t *counter);
void	ft_putnbr_pf(int num, size_t *counter);
void	ft_putint_pf(unsigned int num, size_t *counter);
void	ft_hex_pf(unsigned int num, size_t *counter, char *base);
void	ft_pointer_pf(void *ptr, size_t *counter);

/* auxiliary functions */
char	    *ft_changer_pf(unsigned long long n, char *base);
size_t	    ft_strlcpy(char *dest, const char *src, size_t n);
void	    *ft_calloc(size_t nmemb, size_t size);
void	    ft_bzero(void *s, size_t n);
/* algoritmic funcions */
void    insert(Node **A, int value);
void    pa(Node **A, Node **B);
void    pb(Node **A, Node **B);
void    rr(Node **A, Node **B);
void    rrr(Node **A, Node **B);
void    rrx(Node **A);
void    rx(Node **A);
void    ss(Node **A, Node **B);
void    sx(Node **A);
void    deallocate(Node **A);
void    deallocate_first(Node **A);

#endif