/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deallocate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:44:30 by abastard          #+#    #+#             */
/*   Updated: 2024/08/22 16:20:53 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    deallocate(Node **A)
{
    Node* curr = *A;
    while (curr != NULL)
    {
        Node* aux = curr;
        curr = curr->next;
        free(aux);
    }
    *A = NULL;
}