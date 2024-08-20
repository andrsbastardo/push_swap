/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:22:55 by usuadmin          #+#    #+#             */
/*   Updated: 2024/08/20 14:26:14 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_isdigit(int argument)
{
	if ((argument >= '0' && argument <= '9'))
		return (1);
	else
		return (0);
}
/*
  int main()
{
    char c;
    c='0';
    printf("Result when numeric character is passed: %d", is_digit(c));

    c='+';
    printf("\nResult when non-numeric character is passed: %d", is_digit(c));

    return 0;
}
*/
