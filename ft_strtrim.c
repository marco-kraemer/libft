/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos2 <msantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 14:03:30 by msantos2          #+#    #+#             */
/*   Updated: 2025/11/22 15:01:06 by msantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char const *set, char const c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	strtrim_len(char const *s1, char const *set)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s1[i])
	{
		if (!check_set(set, s1[i]))
			break ;
		i++;
	}
	while (s1[i])
	{
		if (check_set(set, s1[i]))
			break ;
		i++;
		len++;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*str;

	len = strtrim_len(s1, set);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		if (!check_set(set, s1[i]))
			break ;
		i++;
	}
	len = 0;
	while (s1[i] && !check_set(set, s1[i]))
		str[len++] = s1[i++];
	str[len] = '\0';
	return (str);
}
