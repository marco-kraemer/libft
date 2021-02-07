/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 14:43:48 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/07 14:54:03 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_char(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
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

	p = (char **)malloc(count_char(s, c));
	i = 0;
	while (i < c)
	{
		p[i] = (char *)malloc(ft_strlen(s));
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
