/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 14:43:48 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/11 15:38:55 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_char(char const *s, char c)
{
	int		i;
	int		j;

	j = 1;
	i = 0;
	while (s[i] == c)
		i++;
	if (s[i] == '\0')
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != '\0')
		{
			while (s[i] == c)
				i++;
			if (s[i] != '\0')
				j++;
		}
		i++;
	}
	return (j);	
}

void	put_chars(char **p, char const *s, char c)
{
	int		j;
	int		k;
	int		i;

	j = 0;
	i = 0;
	while (s[i])
	{
		k = 0;
		while (s[i] != '\0' && s[i] != c)
			p[j][k++] = s[i++];
		while (s[i] == c)
			i++;
		j++;
	}
}

static char	**to_free(char const **p, int j)
{
	while (j > 0)
	{
		j--;
		free((void *)p[j]);
	}
	free(p);
	return (NULL);
}

char	**create_array(char const *s, char c, char **p)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i])
	{
		k++;
		if (s[i + 1] == c || s[i + 1] == '\0')
		{
			p[j] = malloc(k + 1);
			if (p[j] == NULL)
				return (to_free((char const **)p, j));
			p[j][k] = '\0';
			j++;
			while (s[i + 1] == c)
				i++;
			k = 0;
		}
		i++;
	}
	put_chars(p, s, c);
	return(p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		count;

	count = count_char(s, c);
	p = (char **)malloc(sizeof(char *) * (count + 1));
	p[count] = 0;
	if (count == 0)
		return (p);
	if (p == NULL)
		return (NULL);
	create_array(s, c, p);
	return (p);
}
