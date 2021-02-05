/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 14:58:05 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/04 14:58:05 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *check_letters(int i, int k, int j, char *p, char *c, char const *set, char const *s1)
{
    while (s1[i])
    {
        k = 0;
        while (set[k])
        {
            if (c[i] == set[k])
            {
                k = -1;
                break;
            }
            k++;
        }
        if (k != -1)
        {
            p[j] = c[i];
            j++;
        } 
        i++;
    }
    return (p);
}
char    *ft_strtrim(char const *s1, char const *set)
{
    int     i;
    int     k;
    int     j;
    char    *p;
    char    *c;
    
    c = (char *)s1;
    p = (void*)malloc(ft_strlen(s1) - ft_strlen(set));
    if (p == NULL)
        return NULL;
    i = 0;
    j = 0;
    k = 0;
    return  (check_letters(i, k, j, p, c, set, s1));
}