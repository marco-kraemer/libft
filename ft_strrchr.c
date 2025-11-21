/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos2 <msantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 11:22:21 by msantos2          #+#    #+#             */
/*   Updated: 2025/11/21 11:26:43 by msantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int search_str)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == search_str)
		{
			return (&str[i]); 
		}
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[100] = "Hello World!";
// 	char	c = 'W';

// 	printf("%s\n", ft_strrchr(str, c));
// }