/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 13:44:05 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/04 13:44:05 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    int i;
    size_t length;
    char *p;
    char *k;

    k = (char *)s;
    length = ft_strlen(s);
    p = (void*)malloc(length);
    i = 0;
    while (s[i])
    {
        p[i] = k[i];
        i++;
    }
    return k;
}