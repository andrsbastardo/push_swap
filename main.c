/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:51:40 by abastard          #+#    #+#             */
/*   Updated: 2024/08/11 17:25:21 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct Node
{
    int x;
    struct Node* next;
    struct Node* prev;
} Node;

//Función para insertar datos al final de la lista
void    insert_end(Node** root, int value)
{
    //Creamos el nuevo nodo
    Node* new_node = malloc(sizeof(Node));
    if (new_node == NULL)
        exit (1);
    //Asignamos los valores al nuevo nodo
    new_node -> next = NULL;
    new_node ->x = value;
    //Comprobamos si hay algo en la lista, si no, el primer dato es el nuevo nodo
    if (*root == NULL)
    {
        *root = new_node;
        return;
    }
    //A partir de aqui, insertamos nuevo nodo en la lista.
    Node* curr = *root;
    while (curr ->next != NULL){
    curr = curr->next;
    }
    curr ->next = new_node;
}

//Inserta un dato el primero de la lista
void insert_first(Node **root, int value)
{
    Node* new_node = malloc(sizeof(Node));
    if (new_node == NULL)
        return;
    new_node ->x = value;
    new_node ->next = *root;

    *root = new_node;
}

//Insertar dato en  el segundo puesto de la lista
void    insert_i(Node** root, int value)
{
    size_t i;
    i = 0;
    Node* curr = *root;
    //Creamos el nuevo nodo
    Node* new_node = malloc(sizeof(Node));
    if (new_node == NULL)
        exit (1);
    new_node ->x = value;
    //Le asignamos al nodo 1 la dirección del nuevo nodo
    while (i != 0)
    {
        curr = curr->next;
        i++;
    }
    new_node->next = curr->next;
    curr->next = new_node;
}

//Limpia la memoria de todos los nodods
void    deallocate(Node** root)
{
    Node* curr = *root;    
    while (curr != NULL)
    {
        Node* aux = curr;
        curr = curr->next;
        free(aux);
    }
    
}
//Elimina un nodo
void    remove_node(Node** root, int location)
{
    size_t i;
    
    i = 0;
    Node* curr = *root;
    while (i != (location-1))
    {
        curr = curr->next;
        i++;
    }
    Node* aux = curr->next;
    curr->next = curr->next->next;
    curr = curr->next;
    free(aux);
    
}

void    change_list(Node** root, int location)
{
    size_t i;
    
    i = 0;
    Node* curr = *root;
    while (i != (location-1))
    {
        curr = curr->next;
        i++;
    }
    Node* aux = curr->next;
    curr->next = curr->next->next;
    curr = curr->next;
    free(aux);
    
}

int    main(int argc, char **argv)
{
//Lista enlazada de 2 caracteres 1 y 2. La lista acaba en null.
   Node* root = malloc(sizeof(Node));
   if (root == NULL)
        exit (1);
   root ->x = 3;
   root ->next = NULL;
    insert_first(&root, 1);
    insert_end(&root, 5);
    insert_i(&root, 4);
    insert_i(&root, 2);
    remove_node(&root,1); 
//Bucle de iteracion de la lista

    Node* curr = root;
    while (curr != NULL){
        printf("%d \n", curr->x);
        curr = curr->next;
    }
    deallocate(&root);
    return(0);
}
