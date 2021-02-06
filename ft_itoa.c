/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/06 19:02:09 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/06 19:13:48 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_digits(int n)
{
	int		i;

	i = 1;
	while (i > 0)
	{
		n = n / 10;
		if (n < 1)
			break ;
		i++;
	}
	return (i);
}

void	reverse(char *p, char *tmp, int i, int n)
{
	int		j;

	j = 0;
	while (j < count_digits(n))
	{
		p[j] = tmp[i - 1];
		j++;
		i--;
	}
}

char	*ft_itoa(int n)
{
	char	*p;
	char	tmp[count_digits(n)];
	int		i;
	int		c;
	int		cpy;

	c = count_digits(n);
	i = 0;
	p = (char *)malloc(c);
	cpy = n;
	while (i < c)
	{
		tmp[i] = (cpy % 10) + '0';
		cpy = cpy / 10;
		i++;
	}
	reverse(p, tmp, i, n);
	return (p);
}
