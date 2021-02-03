/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraurel </var/mail/maraurel>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 09:37:12 by maraurel          #+#    #+#             */
/*   Updated: 2021/02/03 09:39:55 by maraurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h> 
#include "libft.h"

int main() 
{
    //ft_memset
    printf("________________________________________________\n");
    char str1[50] = "GeeksForGeeks is for programming geeks.";
    char str2[50] = "GeeksForGeeks is for programming geeks."; 
    ft_memset(str1 + 13, '.', 8*sizeof(char)); 
    printf("ft_memset():  %s\n", str1);
    memset(str2 + 13, '.', 8*sizeof(char)); 
    printf("   memset():  %s\n", str1);
    
	// ft_bzero
    printf("________________________________________________\n");
    char str3[50] = "GeeksForGeeks is for programming geeks."; 
    ft_bzero(str3 + 5, 15); 
    printf("ft_bzero():  %s\n", str3);
    char str4[50] = "GeeksForGeeks is for programming geeks."; 
    bzero(str4 + 5, 1); 
    printf("   bzero():  %s\n", str4);

    // ft_memcpy
    printf("________________________________________________\n");
    const char src[50] = "GeeksForGeeks is for programming geeks.";
    char dest1[50];
    ft_memcpy(dest1, src, strlen(src)+1);
    printf("ft_memcpy = %s\n", dest1);
    char dest2[50];
    memcpy(dest2, src, strlen(src)+1);
    printf("   memcpy = %s\n", dest2);

    // ft_memccpy
    printf("________________________________________________\n");
    char dest3[50];
    ft_memccpy(dest3, src, 'k',strlen(src)+1);
    printf("ft_memcpy = %s\n", dest3);
    char dest4[50];
    memccpy(dest4, src, 'k',strlen(src)+1);
    printf("   memcpy = %s\n", dest4);

    // ft_memmove
    printf("________________________________________________\n");
    char dest5[50];
    ft_memmove(dest5, src, sizeof(src));
    printf("ft_memmove = %s\n", dest5);
    char dest6[50];
    memmove(dest6, src, sizeof(src));
    printf("   memmove = %s\n", dest6);

    //final
    printf("\n");
    return 0;
}
