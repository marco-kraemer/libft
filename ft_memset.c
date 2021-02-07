/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 14:40:36 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/07 14:43:17 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ftmemset(void *s, int c, size_t n)
{
	size_t			a;
	unsigned char	*p;

	a = 0;
	p = s;
	while (a < n)
	{
		p[a] = (unsigned char)c;
		a++;
	}
	return (p);
}
