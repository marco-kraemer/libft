/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 19:16:29 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/06 19:18:58 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		*((char *)dest + i) = *((char *)src + i);
		if (*((char *)dest + i) == '\0')
			return (dest);
		if (*((char *)src + i) == c)
			return (dest);
		i++;
	}
	return (dest);
}
