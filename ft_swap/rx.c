/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rx.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:12:55 by abastard          #+#    #+#             */
/*   Updated: 2024/08/15 12:43:06 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    rx(Node **A)
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
    curr->next = first;
    struct Node* last = curr; 
    curr = curr->next->next;
    curr->prev->prev = last;
    curr ->prev->next = NULL;
    curr->prev = NULL;
    *A = curr;
}
