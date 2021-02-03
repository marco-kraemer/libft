/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 12:10:16 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/03 12:10:16 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void * src, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        *((char *)dest + i) = *((char *)src + i);
        if (*((char *)dest + i) == '\0')
            return (dest);
        i++;
    }
    return (dest);
}