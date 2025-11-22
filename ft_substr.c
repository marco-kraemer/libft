/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos2 <msantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 12:54:26 by msantos2          #+#    #+#             */
/*   Updated: 2025/11/22 15:01:19 by msantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	int		i;
	int		check_len;

	check_len = ft_strlen(s) - start;
	if (!s)
		return (NULL);
	if (check_len < 0)
		len = 0;
	else if (len > check_len)
		len = check_len;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	if (start < ft_strlen(s))
	{
		while (i < len && s[i + start])
		{
			dest[i] = s[i + start];
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
