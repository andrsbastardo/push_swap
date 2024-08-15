/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deallocate_first.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:45:05 by abastard          #+#    #+#             */
/*   Updated: 2024/08/15 12:45:32 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    deallocate_first(Node **A)
{
    Node* aux = *A;
    Node* curr = aux;
    curr = curr->next;
    if(!curr)
    {
       free(aux);
       *A = curr;
    }
    else
    {
        curr ->prev = NULL;
        free(aux);
        *A = curr;
    }
}