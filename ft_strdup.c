/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:00:39 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/07 15:03:45 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	size_t	length;
	char	*p;
	char	*k;

	k = (char *)s;
	length = ft_strlen(s);
	p = (void *)malloc(length);
	i = 0;
	if (p == NULL)
		return (NULL);
	while (s[i])
	{
		p[i] = k[i];
		i++;
	}
	return (k);
}
