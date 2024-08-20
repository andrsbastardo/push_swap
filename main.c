/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:51:40 by abastard          #+#    #+#             */
/*   Updated: 2024/08/20 16:07:48 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Tener en cuenta int max e int min.

int    main(int argc, char **argv)
{
    int     i;
    int     b;
    int     flag;
    int     **c;
    Node    *A = malloc(sizeof(Node));
    deallocate_first(&A);

    i = 1;
    b = 0;
    flag = 0;
    // Comprueba que los datos esten metidos bien
    /* while (i < argc)
    { 
        while (argv[i][b] != '\0')
        {
            if  (argv[i][b] == '-' || argv[i][b] == '+')
            {
                flag = 1;
                b++;
            }
            if ((argv[i][b] < '0' || argv[i][b] >'9') 
                || (flag == 1 && (argv[i][b] == 43 || argv[i][b] == 45))) //Esto esta mal
            {
                ft_printf("Error2\n");
                return(0);
            }
            b++;
        }
         i++;
         ft_printf("Error3\n");
    } */
   
   //Para pasar los datos de argumentos a punteros int, primero tienes que juntar todos los argumentos en una misma linea.
   char *str;
   char *aux;
   i = 1;
   str = "";
   printf("%d\n", argc);
   while (i < argc)
   {
    
        aux = ft_strjoin(str, " ");    
        str = ft_strjoin(aux,argv[i]);
        free(aux);

        i++;
   }
   printf("%s\n", str);
   free(str);
   
    
    
    
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
