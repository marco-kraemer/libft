/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 09:03:47 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/05 09:03:47 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     count_char(char const *s, char c)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s[i])
    {
        if (s[i] == c)
            j++;
        i++;
    }
    return (j);
}

char    **ft_split(char const *s, char c)
{
    char    **p;
    int     i;
    int     j;
    int     k;

    p = (char **)malloc(count_char(s, c));
    i = 0;
    while (i < c)
    {
        p[i] = (char *)malloc(ft_strlen(s));
        i++;
    }
    k = 0;
    i = 0;
    j = 0;
    while (s[k])
    {
        if (s[k] == c)
        {
            i++;
            j = 0;
        }
        p[i][j] = s[k];
        k++;
        j++;
    }
    free(p);
    return (p);
}