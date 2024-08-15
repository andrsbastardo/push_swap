/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:09:09 by abastard          #+#    #+#             */
/*   Updated: 2024/08/15 12:42:50 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    pa(Node **A, Node **B)
{
    if (!B)
        return;
    Node* b = *B;
    Node* aux = *A;
    Node* curr = aux;
    Node* new_node;
    new_node = malloc(sizeof(Node));
    if (new_node == NULL)
        return;
    new_node->x = b->x;
    new_node->next = *A;
    new_node->prev = NULL;
    if (!curr)
        *A = new_node;
    else
    {
        curr->prev = new_node;
        *A = new_node;
    }
    return(deallocate_first(B));
}