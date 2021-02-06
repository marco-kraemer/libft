/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 18:48:42 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/06 18:51:26 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtf.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (nmemb * size == 0)
		return (NULL);
	p = (void *)malloc(nmemb * size);
	p = ft_memset(p, 0, size * nmemb);
	return (p);
}
