/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 08:34:31 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/04 08:34:31 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
    int i;
    int j;
    char *p;

    i = 0;
    j = 0;
    p = (char*)str;
    while (str[i])
    {
        if (str[i] == c)
            j = i;
        i++;
    }
    if (c == '\0')
        return (p + i);
    if (j == 0)
        return (NULL);
    return (p + j);
}