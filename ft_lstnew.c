/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos2 <msantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 13:42:08 by msantos2          #+#    #+#             */
/*   Updated: 2025/11/23 13:47:12 by msantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// typedef struct s_list
// {
// 	void *content;
// 	struct s_list *next;
// } t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc (sizeof(t_list) * 1);
	node->content = content;
	node->next = NULL;
	return (node);
}