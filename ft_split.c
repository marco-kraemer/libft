/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos2 <msantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 15:14:59 by msantos2          #+#    #+#             */
/*   Updated: 2025/11/22 15:26:26 by msantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_split
{
	char	**strs;
	int		pos;
	int		last_pos;
	int		nbr_of_str;
	int		count_str;
}	t_split;

static int	ft_nbrstr(char const *str, char c)
{
	int	pos;
	int	count;
	int	len;

	pos = 0;
	count = 0;
	len = 0;
	len = 0;
	while (str[len])
		len++;
	while (pos < len)
	{
		while (pos < len && str[pos] == c)
			pos++;
		if (pos < len)
			count++;
		while (pos < len && str[pos] != c)
			pos++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	t_split	split;

	split.nbr_of_str = ft_nbrstr(s, c);
	split.strs = (char **)malloc(sizeof(char *) * (split.nbr_of_str + 1));
	split.count_str = 0;
	split.pos = 0;
	while (s[split.pos])
	{
		while (s[split.pos] && s[split.pos] == c)
			split.pos++;
		split.last_pos = split.pos;
		while (s[split.pos] && s[split.pos] != c)
			split.pos++;
		if (split.last_pos < split.pos)
			split.strs[split.count_str++] = ft_substr(s, split.last_pos,
					split.pos - split.last_pos);
	}
	split.strs[split.count_str] = NULL;
	return (split.strs);
}
