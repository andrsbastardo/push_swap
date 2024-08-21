/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:58:38 by abastard          #+#    #+#             */
/*   Updated: 2024/08/21 12:47:44 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
void    check(char *str)
{
    int i;
    int flag;

    i = 1;
    // Comprueba que los datos esten metidos bien
    while (str[i] != '\0')
    {
        if(ft_isdigit(str[i]) || str[i] == ' ')
            flag = 0;
        else if (str[i] == '+' || str[i] =='-')
        {
            flag++;
            if (flag > 1)
            {
                ft_printf("Error\n");
                return;
            }
        }
        else
        {
            ft_printf("Error\n");
            return;
        }
        i++;
    }
}


char    *order(int argc, char **argv)
{
    char    *str;
    char    *aux;
    int     i;
    
    i = 1;
    str = "";
    while (i < argc)
    {
        aux = ft_strjoin(str, " ");    
        str = ft_strjoin(aux,argv[i]);
        free(aux);
        i++;
    }
    check(str);
    return(str);
}