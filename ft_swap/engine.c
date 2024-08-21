/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   engine.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:54:32 by abastard          #+#    #+#             */
/*   Updated: 2024/08/21 13:27:25 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static size_t	string_counter(char *s, char c)
{
	size_t	string;
	size_t	counter;
	size_t	i;

	i = 0;
	string = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			counter = 0;
		else if (counter == 0)
		{
			string++;
			counter = 1;
		}
		i++;
	}
	return (string);
}

void    engine(char *str)
{
    char    c;
    char    **res;
    int     i;
    int     last;
    int     b;
    
    c = ' ';
    last = string_counter(str, c);
    res = ft_split(str, c); //Puede estar aqui el error?
    while (i < last)
    {
        b = ft_atoi(res[i]);
        printf("%d\n",b);
        i++;
    }
}
