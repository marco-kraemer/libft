/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos2 <msantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:30:40 by msantos2          #+#    #+#             */
/*   Updated: 2025/11/22 11:51:07 by msantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str; 
	unsigned char	m;

	str = (unsigned char *)s;
	m = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == m)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

// #include <string.h>
// int main () 
// {
// 	const char str[] = "Hello World";
// 	const char ch = 'e';
// 	char *ret;
// 	ret = ft_memchr(str, ch, strlen(str));
// 	printf("String after |%c| is |%s|\n", ch, ret);
// 	return(0);
// }