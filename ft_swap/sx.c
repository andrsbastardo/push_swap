/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sx.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:11:18 by abastard          #+#    #+#             */
/*   Updated: 2024/08/15 12:43:14 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    sx(Node **A)
{
    Node* a2 = *A;
    Node* curr = a2;
    struct Node* next2 = curr->next->next;
    struct Node* next1 = curr->next;
    struct Node* next = curr;
    curr->next->next->prev =next;
    curr->next->next = next;
    curr->next = next2;
    curr->prev = next1;
    curr = curr ->prev;
    curr ->prev = NULL;
    *A = curr;
}