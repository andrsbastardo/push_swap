/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:27:48 by abastard          #+#    #+#             */
/*   Updated: 2024/08/08 12:02:07 by abastard         ###   ########.fr       */
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

typedef struct s_stack_node
{
    int                     value;
    int                     current_position;
    int                     final_index;
    int                     push_price;
    bool                    above_median;
    bool                    cheapest;
    struct  s_stack_node    *target_node;
    struct  s_stack_node    *next;
    struct  s_stack_node    *prev;
    
}               t_stack_node;


void    push_swap(char *str, ...);
int		ft_printf(char const *str, ...);
size_t	ft_strlen(char *str);

/* format functions */
void	ft_character_pf(char c, size_t *counter);
void	ft_string_pf(char *str, size_t *counter);
void	ft_putnbr_pf(int num, size_t *counter);
void	ft_putint_pf(unsigned int num, size_t *counter);
void	ft_hex_pf(unsigned int num, size_t *counter, char *base);
void	ft_pointer_pf(void *ptr, size_t *counter);

/* auxiliary functions */
char	*ft_changer_pf(unsigned long long n, char *base);

#endif