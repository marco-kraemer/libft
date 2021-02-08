/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 12:58:25 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/08 14:48:44 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*p;

	if (n < 0)
	{
		n = n * (-1);
		ft_putchar_fd('-', fd);
	}
	p = ft_itoa(n);
	ft_putstr_fd(p, fd);
}
