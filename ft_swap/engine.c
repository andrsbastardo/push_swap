/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   engine.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:54:32 by abastard          #+#    #+#             */
/*   Updated: 2024/08/22 14:38:59 by abastard         ###   ########.fr       */
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
static char	**free_willy(char **res, size_t i)
{
	while (i--)
	{
		free(res[i]);
	}
	free(res);
	return (NULL);
}

char	engine_check(char **res)
{
	int i;
	long b;
	
	i= 0;
	b = ft_atoi(res[i]);
	if (b > INT_MAX || b < INT_MIN)
	{
		ft_printf("Error\n");
		return('a');
	}
	else
		return('b');
}

void    engine(Node **A, char *str)
{
    char    c;
    char    **res;
    int     i;
    int     last;
    
	if(!str)
	{
		free(str);
		return;
	}
	i = 0;
    c = ' ';
    last = string_counter(str, c);
    res = ft_split(str, c);
	free(str);
	if (engine_check(res) == 'a')
		return;
    while (i < last)
    {
        insert(A, ft_atoi(res[i]));
        i++;
    }
	free_willy(res, last);
}
