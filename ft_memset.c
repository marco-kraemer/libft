/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 13:31:08 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/03 13:31:08 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    size_t  a;
    unsigned char   *p;

    a = 0;
    p = s;
    while (a < n)
    {
        p[a] = (unsigned char)c;
        a++;
    }
    return (p);
}
