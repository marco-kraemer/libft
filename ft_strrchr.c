/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos2 <msantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 11:22:21 by msantos2          #+#    #+#             */
/*   Updated: 2025/11/21 15:27:13 by msantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int search_str)
{
	int	i;
	char 	*s;
	unsigned char	c;

	s = (char *)str;
	i = ft_strlen(s);
	c = (unsigned char)search_str;
	while (i >= 0)
	{
		if (str[i] == c)
		{
			return (&s[i]); 
		}
		i--;
	}
	if (search_str == '\0')
		return (&s[i]);
	return (NULL);
}

// int	main(void)
// {
// 	char	str[100] = "Hello World!";
// 	char	c = 'W';

// 	printf("%s\n", ft_strrchr(str, c));
// }