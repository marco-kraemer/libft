/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos2 <msantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:14:05 by msantos2          #+#    #+#             */
/*   Updated: 2025/11/22 11:51:46 by msantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		*((char *)dest + i) = *((char *)src + i);
		i++;
	}
	return (dest);
}

// #include <string.h>

// int main ()
// {
// 	const char src[50] = "42";
// 	char dest[50];
// 	strcpy(dest,"Hello World!");
// 	printf("Before ft_memcpy dest = %s\n", dest);
// 	ft_memcpy(dest, src, strlen(src) + 1);
// 	printf("After ft_memcpy dest = %s\n", dest);
// 	return(0);
// }