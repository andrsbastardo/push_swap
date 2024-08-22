/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastard <abastard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:58:38 by abastard          #+#    #+#             */
/*   Updated: 2024/08/22 15:12:52 by abastard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
int    check(char *str)
{
    int i;
    int flag;

    i = 1;
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
                return(0);
            }
        }
        else
        {
            ft_printf("Error\n");
            return(0);
        }
        i++;
    }
    return(1);
}


char    *order(int argc, char **argv)
{
    char    *str;
    char    *aux;
    int     i;
    int     tag;
    
    i = 1;
    if(!argv)
        return(NULL);
    while (i < argc)
    {
        aux = ft_strjoin(str, " ");    
        str = ft_strjoin(aux,argv[i]);
        free(aux);
        i++;
    }
    tag = check(str);
    if(tag == 0)
        return(NULL);
    else
        return(str);
}
