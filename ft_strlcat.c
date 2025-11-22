/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos2 <msantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:31:35 by msantos2          #+#    #+#             */
/*   Updated: 2025/11/22 11:47:24 by msantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(dest);
	if (size < len)
		return (size + ft_strlen(src));
	while (src[i] && len < size - 1 && size > 0)
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (len + ft_strlen(src) - i);
}
