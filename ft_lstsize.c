/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 15:16:39 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/08 18:55:43 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*p;

	i = 0;
	p = lst;
	while (p->next != NULL)
	{
		i++;
		p = p->next;
	}
	if (i != 0)
		i++;
	return (i);
}
