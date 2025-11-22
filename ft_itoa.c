/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos2 <msantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 15:34:37 by msantos2          #+#    #+#             */
/*   Updated: 2025/11/22 16:31:56 by msantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_len(long nbr)
{
	int	len;

	len = 1;
	if (nbr < 0)
	{
		len++;
		nbr *= -1;
	}
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char *ft_itoa(int n)
{
	long	nbr;
	char	*str;
	int		len;

	nbr = n;
	len = nbr_len(n);
//	printf("\nLength: %d\n", len);
	str = ft_calloc(sizeof(char), len + 1);
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	str[len] = '\0';
	len--;
	while (len >= 0)
	{
		if (len == 0 && str[0] == '-')
			break ;
		str[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
		len--;
	}
//	printf("\nNumber: %i\nString: %s\n", n, str);
	return (str);
}

// int	main(void)
// {
// 	char *nbr = ft_itoa(123);
// 	printf("%s\n", nbr);
// 	free(nbr);
// //	printf("%s\n", ft_itoa(1));
// }