/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:51:40 by abastard          #+#    #+#             */
/*   Updated: 2024/08/22 15:16:35 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Tener en cuenta, datos ordeandos, overflow al long.
// Este comando genera numeros aleatorios
// https://sites.google.com/42adel.org.au/42schoolwiki1/cursus/paced-system
// seq -1000 1000 | sort -R | tail -n 500 | tr '\n' ' '

int    main(int argc, char **argv)
{
    Node    *A = malloc(sizeof(Node));
    deallocate_first(&A);
    /* Node    *B = malloc(sizeof(Node)); */
    /* deallocate_first(&B); */
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
