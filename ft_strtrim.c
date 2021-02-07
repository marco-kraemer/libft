/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 15:42:20 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/07 16:06:12 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*check_letters(char *p, char *c, char const *set, int j)
{
	int		i;
	int		k;

	i = 0;
	while (c[i])
	{
		k = 0;
		while (set[k])
		{
			if (c[i] == set[k])
			{
				k = -1;
				break ;
			}
			k++;
		}
		if (k != -1)
		{
			p[j] = c[i];
			j++;
		}
		i++;
	}
	return (p);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	char	*c;
	int		j;

	j = 0;
	c = (char *)s1;
	p = (void *)malloc(ft_strlen(s1) - ft_strlen(set));
	if (p == NULL)
		return (NULL);
	return (check_letters(p, c, set, j));
}
