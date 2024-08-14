/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:51:40 by abastard          #+#    #+#             */
/*   Updated: 2024/08/14 21:19:34 by abastard         ###   ########.fr       */
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
    Node* aux = *A;
    Node* curr = aux;
    new_node = malloc(sizeof(Node));
    if (new_node == NULL)
        return;
    new_node->x=value;
    new_node->next = *A;
    new_node->prev = NULL;
    if (!curr)
        *A = new_node;
    else
    {
        curr->prev = new_node;
        *A = new_node;
    }
}

void    deallocate_first(Node **A)
{
    Node* aux = *A;
    Node* curr = aux;
    curr = curr->next;
    if(!curr)
    {
       free(aux);
       *A = curr;
    }
    else
    {
        curr ->prev = NULL;
        free(aux);
        *A = curr;
    }
}

void    push_B(Node **A, Node **B)
{
    if (!A)
        return;
    Node* a = *A;
    Node* new_node;
    Node* aux = *B;
    Node* curr = aux;
    new_node = malloc(sizeof(Node));
    if (new_node == NULL)
        return;
    new_node->x = a->x;
    new_node->next = *B;
    new_node->prev = NULL;
    if (!curr)
        *B = new_node;
    else
    {
        curr->prev = new_node;
        *B = new_node;
    }
    return(deallocate_first(A));
}

void   push_A(Node **A, Node **B)
{
    if (!B)
        return;
    Node* b = *B;
    Node* aux = *A;
    Node* curr = aux;
    Node* new_node;
    new_node = malloc(sizeof(Node));
    if (new_node == NULL)
        return;
    new_node->x = b->x;
    new_node->next = *A;
    new_node->prev = NULL;
    if (!curr)
        *A = new_node;
    else
    {
        curr->prev = new_node;
        *A = new_node;
    }
    return(deallocate_first(B));
}

void  swap(Node **A) //Me rompes la vaina? Si, si la rompes
{
    Node* a2 = *A;
    Node* curr = a2;
    struct Node* next2 = curr->next->next; //La dirección del siguiente al segundo tercero
    struct Node* next1 = curr->next; //La dirección del siguiente al primero. Segundo
    struct Node* next = curr; //La dirección del primero
    curr->next->next->prev =next;
    curr->next->next = next;
    curr->next = next2;
    curr->prev = next1;
    curr = curr ->prev;
    curr ->prev = NULL;
    *A = curr;
}
void   sswap(Node **A, Node **B)
{
    swap(A);
    swap(B);
}

void rotate(Node **A)
{
    Node* aux = *A;
    Node* curr = aux;
    struct Node* first = curr;
     
    while (curr->next !=NULL)
    {
        curr= curr->next;
    }
    curr->next = first;
    struct Node* last = curr; 
    curr = curr->next->next;
    curr->prev->prev = last;
    curr ->prev->next = NULL;
    curr->prev = NULL;
    *A = curr;
}

void rrotate(Node **A, Node **B)
{
    rotate(A);
    rotate(B);
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
    insert_in_A(&A, 4);
    insert_in_A(&A, 5);
    insert_in_A(&A, 6);
    swap(&A);
    rotate(&A);
    printf("Lista B\n");
    for (Node* curr = B; curr != NULL; curr = curr->next){
        printf("%p Anterior\n",curr->prev);
        printf("%d \n",curr->x);
        printf("%pSiguiente\n",curr->next);
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
