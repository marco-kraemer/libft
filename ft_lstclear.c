/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos2 <msantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 15:14:50 by msantos2          #+#    #+#             */
/*   Updated: 2025/11/23 15:46:03 by msantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;
	t_list	*tmp;

	node = *lst;
	if (!node)
		return ;
	while (node)
	{
		tmp = node;
		node = tmp->next;
		ft_lstdelone(tmp, del);
	}
	*lst = NULL;
}