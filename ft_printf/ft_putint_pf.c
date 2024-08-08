/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putint_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:19:37 by abastard          #+#    #+#             */
/*   Updated: 2024/08/01 12:02:48 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_putint_pf(unsigned int n, size_t *counter)
{
	char	*str;

	str = ft_changer_pf(n, DECIMAL);
	ft_string_pf(str, counter);
	free(str);
}