/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 09:22:52 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/04 09:22:52 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *nptr)
{
    int i;
    int j;
    int value;

    i = 0;
    j = 1;
    value = 0;
    while (nptr[i] == 32)
        i++;
    if (nptr[i] == 45)
    {
        j = j * (-1);
        i++;
    }
    if (nptr[i] == 43)
        i++;
    if (nptr[i] < 48 || nptr[i] > 56)
        return (0);
    while (nptr[i])
    {
        if (nptr[i] < 48 || nptr[i] > 56)
            break;
        value = value * 10 + (nptr[i] - '0');
        i++;
    }
    return (value * j);
}