/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:51:40 by abastard          #+#    #+#             */
/*   Updated: 2024/08/22 14:45:35 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Tener en cuenta nulos,l datos ordeandos, overflow al long,

int    main(int argc, char **argv)
{
    Node    *A = malloc(sizeof(Node));
    deallocate_first(&A);
    /* Node    *B = malloc(sizeof(Node)); */
    /* deallocate_first(&B); */
    printf("%d\n",argc);
    engine(&A, order(argc, argv));

    
/*     printf("Lista B\n");
    for (Node* curr = B; curr != NULL; curr = curr->next){
        printf("%d \n",curr->x);
    } */
    ft_printf("Lista A\n");
    for (Node* curr = A; curr != NULL; curr = curr->next){
        ft_printf("%d\n",curr->x);
    }
    deallocate(&A);
/*     deallocate(&B); */
    return(0);
}
