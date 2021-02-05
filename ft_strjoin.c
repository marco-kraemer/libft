/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 14:43:13 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/04 14:43:13 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *p;
    int     i;
    int     len;

    len = ft_strlen(s1) + ft_strlen(s2);
    p = (void*)malloc(len);
    if (p == NULL)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        p[i] = s1[i];
        i++;
    }
    i = 0;
    while (s2[i])
    {
        p[ft_strlen(s1) + i] = s2[i];
        i++;
    }
    return (p);
}