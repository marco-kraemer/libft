/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos2 <msantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 12:01:32 by msantos2          #+#    #+#             */
/*   Updated: 2025/11/23 14:45:06 by msantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*alloc;
	size_t	len;

	len = nitems * size;
	if (len != 0 && size != len / nitems)
		return (NULL);
	alloc = malloc(len);
	if (!alloc)
		return (NULL);
	return (ft_memset(alloc, 0, len));
}
