/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:40:31 by abastard          #+#    #+#             */
/*   Updated: 2024/08/20 15:54:27 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	char	*dest;
	int		i;

	i = 0;
	str = (char *)s;
	dest = (char *)malloc(ft_strlen(str) + 2);
	if (!dest)
		return (NULL);
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = ' ';
	dest[i+1] = '\0';
	return (dest);
}
