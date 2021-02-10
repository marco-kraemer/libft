/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 14:39:08 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/09 19:55:00 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp1;
	char	*tmp2;
	unsigned int		i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	tmp1 = (char *)dest;
	tmp2 = (char *)src;
	if (tmp1 > tmp2)
		while (n-- > 0)
			tmp1[n] = tmp2[n];
	else
		while (i < n)
		{
			tmp1[i] = tmp2[i];	
			i++;
		}
	return (dest);
}
