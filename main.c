/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:51:40 by abastard          #+#    #+#             */
/*   Updated: 2024/08/22 17:02:43 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Tener en cuenta, datos ordeandos, overflow al long.
// Este comando genera numeros aleatorios
// https://sites.google.com/42adel.org.au/42schoolwiki1/cursus/paced-system
// seq -1000 1000 | sort -R | tail -n 500 | tr '\n' ' '

int    main(int argc, char **argv)
{
    int i;
    i = 1;
    
    char *sr;
    sr = "";
    while (i < argc)
    {
        if(argv[i][1] != 00)
            printf("%d\n",argv[i][1]);
        i++;
    }

    Node    *A = malloc(sizeof(Node));
    deallocate_first(&A);
   /*  order(argc, argv); */
    /* Node    *B = malloc(sizeof(Node));
    deallocate_first(&B); */ 
    /* engine(&A, order(argc, argv)); */

    
    /* printf("Lista B\n");
    for (Node* curr = B; curr != NULL; curr = curr->next){
        printf("%d \n",curr->x);
    }
    ft_printf("Lista A\n");
    for (Node* curr = A; curr != NULL; curr = curr->next){
        ft_printf("%d\n",curr->x);
    } */
    deallocate(&A);
    /* deallocate(&B); */
    return(0);
}
