/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 12:10:01 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/03 12:10:01 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
    size_t          i;
    unsigned char   *m;
    unsigned char   p;

    m = (unsigned char *)str;
    p = (unsigned char)c;

    i = 0;
    while (i < n)
    {
        if (*m == p)
            return (m);
        i++;
        m++;
    }
    return (NULL);
}
