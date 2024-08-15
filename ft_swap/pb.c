/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:09:09 by abastard          #+#    #+#             */
/*   Updated: 2024/08/15 12:42:53 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    pb(Node **A, Node **B)
{
    if (!A)
        return;
    Node* a = *A;
    Node* new_node;
    Node* aux = *B;
    Node* curr = aux;
    new_node = malloc(sizeof(Node));
    if (new_node == NULL)
        return;
    new_node->x = a->x;
    new_node->next = *B;
    new_node->prev = NULL;
    if (!curr)
        *B = new_node;
    else
    {
        curr->prev = new_node;
        *B = new_node;
    }
    return(deallocate_first(A));
}