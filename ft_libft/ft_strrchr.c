/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:46:13 by abastard          #+#    #+#             */
/*   Updated: 2024/08/20 14:26:14 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			s2;
	unsigned char	c2;

	c2 = (unsigned char)c;
	s2 = ft_strlen(s);
	while ((*(s + s2) != c2) && (s2 > 0))
		s2--;
	if (c2 == *(s + s2))
		return ((char *)(s + s2));
	return (NULL);
}
