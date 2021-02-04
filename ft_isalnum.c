/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel <maraurel@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 11:02:26 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/04 11:02:26 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int c)
{
    if (((c < 91 && c > 64) || (c < 123 && c > 96)) || (c > 47 && c < 58))
        return (8);
    return (0);
}