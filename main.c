/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:51:40 by abastard          #+#    #+#             */
/*   Updated: 2024/08/11 19:10:07 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct Node
{
    int x;
    struct Node* next;
    struct Node* prev;
} Node;

void    insert_in_A(Node **A, int value)
{
    Node* new_node;
    new_node = malloc(sizeof(Node));
    if (new_node == NULL)
        return;
    new_node->x=value;
    new_node->next = *A;
    *A = new_node;
    
}

void    push_B(Node **A, Node **B)
{
    if (!A)
        return;
    Node* a = *A;
    Node* new_node;
    new_node = malloc(sizeof(Node));
    if (new_node == NULL)
        return;
    new_node->x = a->x;
    new_node->next = *B;
    *B = new_node;
    Node* aux = a;
    a = a->next;
    free(aux);
    
}

void    deallocate(Node **A)
{
    Node* curr = *A;
    while (curr != NULL)
    {
        Node* aux = curr;
        curr = curr->next;
        free(aux);
    }
    *A = NULL;
    
}


int    main(int argc, char **argv)
{
    Node* A;
    Node* B;
    insert_in_A(&A, 1);
    insert_in_A(&A, 2);
    insert_in_A(&A, 3);
    push_B(&A,&B);
    push_B(&A,&B);
    printf("Lista A\n");
    for (Node* curr = A; curr != NULL; curr = curr->next){
        printf("%d\n",curr->x); 
    }
    printf("Lista B\n");
    for (Node* curr = B; curr != NULL; curr = curr->next){
        printf("%d\n",curr->x); 
    }
    deallocate(&A);
    deallocate(&B);
    return(0);
}
