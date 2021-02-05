/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 11:29:02 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/05 11:29:02 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     count_digits(int n)
{
    int i;
     
    i = 1;
    while (n > 1)
    {
        n = n / 10;
        i++;
    }
    return (i);
}
char    *ft_itoa(int n)
{
    char    *p[count_digits(n)];
    int     i;

    i = 0;
    while (i < count_digits(n))
        p[i] = (n % 10) + '0';
    printf("%s\n", p[0]);
    return NULL;
}