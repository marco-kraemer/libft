/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos2 <msantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 11:14:09 by msantos2          #+#    #+#             */
/*   Updated: 2025/11/21 11:21:25 by msantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int search_str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == search_str)
		{
			return (&str[i]); 
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[100] = "Hello World!";
// 	char	c = 'l';

// 	printf("%s\n", ft_strchr(str, c));
// }