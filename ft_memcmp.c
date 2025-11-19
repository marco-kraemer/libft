/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos2 <msantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:04:02 by msantos2          #+#    #+#             */
/*   Updated: 2025/11/19 13:38:46 by msantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t		i;
	int			ret;
	const char	*s1;
	const char	*s2;

	s1 = (const char *)str1;
	s2 = (const char *)str2;
	i = 0;
	ret = 0;
	while ((s1[i] != 0 || s2[i] != 0) && i < n)
	{
		if (s1[i] != s2[i])
		{
			ret = ret - (s2[i] - s1[i]);
			return (ret);
		}
		i++;
	}
	return (ret);
}

// #include <string.h>

// int main () 
// {
// 	char str1[15];
// 	char str2[15];
// 	int ret;

// 	memcpy(str1, "ABCa", 6);
// 	memcpy(str2, "ABC", 6);

// 	ret = ft_memcmp(str1, str2, 20);

// 	if(ret > 0) {
// 		printf("str2 is less than str1: %d\n", ret);
// 	} 
// 	else if(ret < 0) {
// 		printf("str1 is less than str2 %d\n", ret);
// 	} 
// 	else {
// 		printf("str1 is equal to str2 %d\n", ret);
// 	}
// 	return(0);
// }