/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 13:19:22 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/04 13:19:22 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *p;
    
    if (nmemb * size == 0)
        return (NULL);
    p = (void*)malloc(nmemb * size);
    p = ft_memset(p, 0, size * nmemb);
    return (p);
}