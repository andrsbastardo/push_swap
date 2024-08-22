/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:06:37 by abastard          #+#    #+#             */
/*   Updated: 2024/08/22 12:34:17 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    insert(Node **A, long n)
{
    Node* new_node;
    Node* aux = *A;
    Node* curr = aux;

    new_node = malloc(sizeof(Node));
    if (new_node == NULL)
        return;
    new_node->x= n;
    new_node->next = *A;
    new_node->prev = NULL;
    if (!curr)
    {
        *A = new_node; // Se rompe al asignar el nuevo nodo a la lista
    }
    else
    {
        curr->prev = new_node;
        *A = new_node;
    }   
}
