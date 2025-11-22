/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos2 <msantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 16:40:48 by msantos2          #+#    #+#             */
/*   Updated: 2025/11/22 16:47:14 by msantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	int				len;
	char			*strs;

	i = 0;
	len = ft_strlen(s);
	strs = malloc (sizeof(char) * (len + 1));
	while (i < len)
	{
		strs[i] = f(i, s[i]);
		i++;
	}
	strs[i] = '\0';
	return (strs);
}