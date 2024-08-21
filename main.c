/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:51:40 by abastard          #+#    #+#             */
/*   Updated: 2024/08/21 12:54:15 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Tener en cuenta int max e int min.

int    main(int argc, char **argv)
{
    char * str;
    
    str = order(argc, argv);
    Node    *A = malloc(sizeof(Node));
    deallocate_first(&A);
    engine(str, &A);

    
/*     printf("Lista B\n");
    for (Node* curr = B; curr != NULL; curr = curr->next){
        printf("%d \n",curr->x);
    } */
    printf("Lista A\n");
    for (Node* curr = A; curr != NULL; curr = curr->next){
        printf("%d\n",curr->x);
    }
    deallocate(&A);
    /* deallocate(&B); */
    return(0);
}
