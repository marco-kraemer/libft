/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 18:35:37 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/10 16:34:30 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	j;
	int	value;
		
	j = 1;
	i = 0;
	value = 0;
	while (nptr[i] == ' ' || nptr[i] == '\n'|| nptr[i] == '\v'
			|| nptr[i] == '\t' ||nptr[i] == '\r' || nptr[i] == '\f')
  		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			j = j * (-1);
		i++;
	}
	while (nptr[i] > 47 && nptr[i] < 58)
	{	
		value = value * 10 + (nptr[i] - '0');
		i++;
	}
	return (value * j);	
}
