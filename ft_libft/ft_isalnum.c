/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 10:22:55 by usuadmin          #+#    #+#             */
/*   Updated: 2024/08/20 14:26:14 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_isalnum(int argument)
{
	if ((argument >= 'a' && argument <= 'z') || (argument >= 'A'
			&& argument <= 'Z') || (argument >= '0' && argument <= '9'))
		return (argument);
	else
		return (0);
}
