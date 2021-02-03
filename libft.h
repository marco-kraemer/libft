/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel </var/mail/maraurel>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 09:25:29 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/03 09:26:07 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef libft
#define libft
#include <stddef.h>

void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void * src, size_t n);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);

#endif
