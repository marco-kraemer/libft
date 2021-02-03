/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 13:59:19 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/03 13:59:19 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t          i;
    unsigned char   *c1;
    unsigned char   *c2;

    c1 = (unsigned char *)s1;
    c2 = (unsigned char *)s2;
    i = 0;
    while (i <= n)
    {
        if (c1[i] != c2[i])
            return (c1[i] - c2[i]);
        i++;
    }
    return (0);
}