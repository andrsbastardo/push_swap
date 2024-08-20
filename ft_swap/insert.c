/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 12:06:37 by abastard          #+#    #+#             */
/*   Updated: 2024/08/19 09:10:33 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    insert(Node **A, char **argv, int   argc)
{
    Node* new_node;
    Node* aux = *A;
    Node* curr = aux;
    int index;
    int iterator;
    
    index = 1;
    iterator = 0;
    while (index < argc)
    {
        while (argv[index][iterator] != NULL)
        {
            new_node = malloc(sizeof(Node));
            if (new_node == NULL)
            return;
            new_node->x=argv[index][iterator];
            new_node->next = *A;
            new_node->prev = NULL;
            if (!curr)
                *A = new_node;
            else
            {
                curr->prev = new_node;
                *A = new_node;
            }
            iterator++;
        }
        index++;
    }
    
    
}
