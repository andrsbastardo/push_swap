/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:51:40 by abastard          #+#    #+#             */
/*   Updated: 2024/08/15 12:45:16 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int    main(int argc, char **argv)
{
    Node* A;
    Node* B;
    insert(&A, 1);
    insert(&A, 2);
    insert(&A, 3);
    insert(&A, 4);
    insert(&A, 5);
    insert(&A, 6);
    printf("Lista B\n");
    for (Node* curr = B; curr != NULL; curr = curr->next){
        //printf("%p Anterior\n",curr->prev);
        printf("%d \n",curr->x);
        //printf("%pSiguiente\n",curr->next);
    }
    printf("Lista A\n");
    for (Node* curr = A; curr != NULL; curr = curr->next){
        // printf("%p Anterior\n",curr->prev);
        printf("%d\n",curr->x);
        // printf("%p Siguiente\n",curr->next);
    }
    deallocate(&A);
    deallocate(&B);
    return(0);
}
