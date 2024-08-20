/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:22:55 by usuadmin          #+#    #+#             */
/*   Updated: 2024/08/20 14:26:14 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_isascii(int argument)
{
	if ((argument >= 0 && argument <= 127))
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	char	c;
	int		result;

	c = '4';
	result = is_ascii(c);
	printf("When %c is passed, return (value is %d\n", c, result));
	c = 'l';
	result = is_ascii(c);
	printf("When %c is passed, return (value is %d\n", c, result));
	c = 'y';
	result = is_ascii(c);
	printf("When %c is passed, return (value is %d\n", c, result));
	c = '€';
	result = is_ascii(c);
	printf("When %c is passed, return (value is %d\n", c, result));
	return (0);
}
*/
