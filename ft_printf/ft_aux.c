/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aux.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 12:46:31 by abastard          #+#    #+#             */
/*   Updated: 2024/08/20 10:08:03 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_strlen_pf(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_bzero_pf(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

void	*ft_calloc_pf(size_t nmemb, size_t size)
{
	int	*ptr;

	if (nmemb >= SIZE_MAX || size >= SIZE_MAX || (nmemb * size) > SIZE_MAX)
		return (NULL);
	ptr = (int *)malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero_pf(ptr, nmemb * size);
	return (ptr);
}

static size_t	ft_loops(unsigned long long n, char *base)
{
	size_t				len;
	unsigned long long	base_len;

	len = 1;
	base_len = ft_strlen_pf(base);
	while (n >= base_len)
	{
		n /= base_len;
		len++;
	}
	return (len);
}

char	*ft_changer_pf(unsigned long long n, char *base)
{
	char	*str;
	int		loop;
	int		base_len;

	loop = ft_loops(n, base);
	base_len = ft_strlen_pf(base);
	str = ft_calloc_pf((loop + 1), sizeof(char));
	if (!str)
		return (NULL);
	while (loop)
	{
		loop -= 1;
		str[loop] = base[n % base_len];
		n /= base_len;
	}
	return (str);
}
