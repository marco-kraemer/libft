/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos2 <msantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 12:37:58 by msantos2          #+#    #+#             */
/*   Updated: 2025/11/21 12:58:18 by msantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *)str + i) = c;
		i++;
	}
	return (str);
}

// int main () 
// {
// 	char str[50];

// 	strcpy(str, "Hello World!");
// 	puts(str);

// 	ft_memset(str, '0', 3);
// 	puts(str);

// 	return(0);
// }