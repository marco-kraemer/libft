/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 14:59:16 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/03 14:59:16 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t k;

    i = 0;
    k = 0;
    while (dst[i] && i < size)
        i++;
    while (src[k] && i + k < size - 1)
    {
        dst[i + k] = src[k];
        k++;
    }

    dst[i + k] = '\0';
    return (i + ft_strlen(src));
}