/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos2 <msantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:33:01 by msantos2          #+#    #+#             */
/*   Updated: 2025/11/18 13:39:08 by msantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strnstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	pos;

	i = 0;
	if (ft_strlen(to_find) == 0)
		return (&str[0]);
	while (str[i])
	{
		j = 0;
		pos = 0;
		if (str[i] == to_find[j])
		{
			pos = i;
			while (str[i] && str[i] == to_find[j])
			{
				i++;
				j++;
			}
			if (j == ft_strlen(to_find))
				return (&str[pos]);
		}
		i++;
	}
	return (NULL);
}
