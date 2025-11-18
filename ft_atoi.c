/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos2 <msantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:10:03 by msantos2          #+#    #+#             */
/*   Updated: 2025/11/18 13:11:37 by msantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	is_negative;
	int	value;

	i = 0;
	is_negative = 0;
	value = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			is_negative++;
		i++;
	}
	if (is_negative % 2 == 0 || is_negative == 0)
		is_negative = 1;
	else
		is_negative = -1;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		value = (str[i] - '0') + (10 * value);
		i++;
	}
	return (value * is_negative);
}
