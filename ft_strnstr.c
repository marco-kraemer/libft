/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos2 <msantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:33:01 by msantos2          #+#    #+#             */
/*   Updated: 2025/11/21 13:40:08 by msantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, int len)
{
	int	i;
	int	j;
	int	pos;

	i = 0;
	if (ft_strlen(to_find) == 0)
		return (&str[0]);
	while (str[i] && i < len)
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
