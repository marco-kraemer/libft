/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 08:14:28 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/04 08:14:28 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
    int i;
    char *p;

    i = 0;
    p = (char*)str;
    while (str[i])
    {
        if (str[i] == c)
            return (p + i);
        i++;
    }
    if (c == '\0')
        return (p + i);
    return (NULL);
}