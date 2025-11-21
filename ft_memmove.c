/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos2 <msantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 13:41:57 by msantos2          #+#    #+#             */
/*   Updated: 2025/11/21 14:36:29 by msantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*tmp_src;

	if (!dest && !src)
		return (NULL);

	tmp_src = (char *)src;
	if (dest > src)
	{
		while (n-- > 0)
			*((char *)dest + n) = tmp_src[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*((char *)dest + i) = tmp_src[i];
			i++;
		}
	}
	return (dest);
}

// int main ()
// {
// 	char src[50] = "abc";
// 	char dest[50];
// 	strcpy(dest,"Hello World!");
// 	printf("Before ft_memmove dest = %s\n", dest);
// 	ft_memmove(dest, src, ft_strlen((src)));
// 	printf("After ft_memmove dest = %s\n", dest);
// 	return(0);
// }
