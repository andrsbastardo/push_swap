/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrx.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:17:01 by abastard          #+#    #+#             */
/*   Updated: 2024/08/15 12:43:02 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    rrx(Node **A)
{
    Node* aux = *A;
    if (!aux)
        return;
    Node* curr = aux;
    struct Node* first = curr;
    while (curr->next !=NULL)
    {
        curr= curr->next;
    }
    struct Node* last = curr;
    curr->next = first;
    curr->prev->next = NULL;
    curr ->prev = NULL;
    curr->next->prev = last;
    *A = curr;
}