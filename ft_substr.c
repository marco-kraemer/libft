/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 14:19:14 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/04 14:19:14 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *p;
    size_t  i;

    p = (void*)malloc(len);
    if (p == NULL)
        return (NULL);
    i = 0;
    while (i < len && s[start])
    {
        p[i] = s[start];
        i++;
        start++;
    }
    return (p);
}
