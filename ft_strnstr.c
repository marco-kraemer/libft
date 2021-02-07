/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:17:33 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/07 15:21:26 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	size_t	i;
	size_t	j;

	b = (char *)big;
	i = 0;
	j = 0;
	if (ft_strlen(little) == 0)
		return (b);
	while (big[i++] && i <= len)
	{
		if (little[j] == big[i])
		{
			while (little[j++] == big[i++] && i <= len)
			{
				if (j == ft_strlen(little))
					return (b + i - j);
			}
		}
	}
	return (NULL);
}
