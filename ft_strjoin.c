/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos2 <msantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 13:52:57 by msantos2          #+#    #+#             */
/*   Updated: 2025/11/22 14:01:37 by msantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_size;
	char	*str;
	int		size_s1;
	int		i;

	size_s1 = ft_strlen(s1);
	total_size = size_s1 + ft_strlen(s2);
	str = malloc(sizeof(char) * (total_size + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++; 
	}
	i = 0;
	while (s2[i])
	{
		str[i + size_s1] = s2[i];
		i++; 
	}
	str[i + size_s1] = '\0';
	return (str);
}
