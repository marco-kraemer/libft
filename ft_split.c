/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 14:43:48 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/10 20:37:26 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_char(char const *s, char c)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			j++;
		i++;
	}
	return (j);
}

void	create_array(int i, char const *s, char c, char **p)
{
	int	j;
	int	k;

	j = 0;
	k = 0;
	i = 0;
	while (s[k])
	{
		if (s[k] == c && j != 0)
		{
			p[i][j] = '\0';
			i++;
			j = 0;
		}
		p[i][j] = s[k];
		k++;
		j++;
	}
	p[i][j] = '\0';
	p[i + 1] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		i;
	int		count;

	count = count_char(s, c);
	p = (char **)malloc(count);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < c)
	{
		if (p[i] == NULL)
		{
			while (i < c)
			{
				free(p[i]);
				i++;
			}
			free(p);
			return (NULL);
		}
		i++;
	}
	create_array(i, s, c, p);
	return (p);
}
