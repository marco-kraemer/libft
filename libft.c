/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel </var/mail/maraurel>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 09:19:31 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/03 09:25:00 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h> 

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

void ft_bzero(void *s, size_t n)

{	    
	size_t  a;
	unsigned char   *p;

    a = 0;
    p = s;
    while (a < n)
	{
        p[a] = '\0';
        a++;
	}
}

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

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	    size_t i;

	    i = 0;
	    while (i < n)
	    {
	        *((char *)dest + i) = *((char *)src + i);
	        if (*((char *)dest + i) == '\0')
	            return (dest);
	        if (*((char *)src + i) == c)
	            return (dest);
	        i++;
		}
		return (dest);
}

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
	char tmp[n];

	i = 0;
    while (i < n)
    {
	    tmp[i] = *((char *)src + i);
		if (tmp[i] == '\0')
            break;
        i++;
    }
    i = 0;
    while (i < n)
    {
        *((char *)dest + i) = tmp[i];
        if (*((char *)dest + i) == '\0')
            return (dest);;
        i++;
    }
    return (dest);
}


