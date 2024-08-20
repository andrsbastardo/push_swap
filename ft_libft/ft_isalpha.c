/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:22:55 by usuadmin          #+#    #+#             */
/*   Updated: 2024/08/20 14:26:14 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_isalpha(int argument)
{
	if ((argument >= 'a' && argument <= 'z') || (argument >= 'A'
			&& argument <= 'Z'))
		return (1);
	else
		return (0);
}

/*
	int main()
{
	char	c;

	c = '-';
	printf("\nResult when uppercase alphabet is passed: %d", is_alpha(c));
	c = 'a';
	printf("\nResult when lowercase alphabet is passed: %d", is_alpha(c));
	c='+';
	printf("\nResult when non-alphabetic character is passed: %d", is_alpha(c));
	return (0);
}
*/