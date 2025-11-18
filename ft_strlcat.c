/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos2 <msantos2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 13:31:35 by msantos2          #+#    #+#             */
/*   Updated: 2025/11/18 13:32:26 by msantos2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				len;
	unsigned int	i;
	int				ret;
	int				length_src_dest;

	length_src_dest = ft_strlen(dest) + ft_strlen(src);
	len = ft_strlen(dest);
	ret = 0;
	i = 0;
	if (size <= 0)
		return (0);
	while (src[i])
		i++;
	ret = i;
	i = 0;
	while (dest[i])
		i++;
	ret += i;
	i = 0;
	while (src[i] && i < size)
		dest[len++] = src[i++];
	if (i == size && src[i] != 0)
		return (size);
	dest[len] = '\0';
	return (length_src_dest);
}
