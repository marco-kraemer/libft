/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 14:39:08 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/07 14:40:03 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	tmp[n];

	i = 0;
	while (i < n)
	{
		tmp[i] = *((char *)src + i);
		if (tmp[i] == '\0')
			break ;
		i++;
	}
	i = 0;
	while (i < n)
	{
		*((char *)dest + i) = tmp[i];
		if (*((char *)dest + i) == '\0')
			return (dest);
		i++;
	}
	return (dest);
}
