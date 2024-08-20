/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:58:38 by abastard          #+#    #+#             */
/*   Updated: 2024/08/17 18:03:26 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    order(Node **A)
{
    Node*   aux = *A;
    Node*   curr = aux;
    while (curr ->x > curr->next->x)
    {
        curr = curr->next;
    }
    if (curr->x == curr->next->x)
        ft_printf("Error");
    
}