/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:08:09 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/10 14:51:22 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = 0;
	while (src[j] && i + j < size - 1 && size > 0)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	if (size < ft_strlen(src))
		return (ft_strlen(src) + size);
	return (i + ft_strlen(src));
}
