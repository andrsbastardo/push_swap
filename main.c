/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:51:40 by abastard          #+#    #+#             */
/*   Updated: 2024/08/19 08:51:03 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Tener en cuenta int max e int min.

int    main(int argc, char **argv)
{
    int     i;
    char    b;
    char    *c;
    Node    *A;
    
    
    
/*     printf("Lista B\n");
    for (Node* curr = B; curr != NULL; curr = curr->next){
        printf("%d \n",curr->x);
    } */
    printf("Lista A\n");
    for (Node* curr = A; curr != NULL; curr = curr->next){
        printf("%d\n",curr->x);
    }
    deallocate(&A);
/*     deallocate(&B); */
    return(0);
}
