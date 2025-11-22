/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos2 <msantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:10:03 by msantos2          #+#    #+#             */
/*   Updated: 2025/11/22 11:38:25 by msantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	ft_atoi(const char *str)
{
	int	i;
	int	is_negative;
	int	value;
	
	i = 0;
	is_negative = 1;
	value = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			is_negative = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		value = (str[i] - '0') + (10 * value);
		i++;
	}
	return (value * is_negative);
}
