/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 10:45:14 by abastard          #+#    #+#             */
/*   Updated: 2024/08/20 14:26:14 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	dest2;
	size_t	src2;

	i = 0;
	dest2 = ft_strlen(dest);
	src2 = ft_strlen(src);
	if (n <= dest2 || n == 0)
		return (src2 + n);
	j = dest2;
	while ((src[i]) && i < (n - 1 - dest2))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (src2 + dest2);
}
