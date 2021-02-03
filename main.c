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

    // ft_memchr
    printf("________________________________________________\n");
    char *s1;
    char *s2;
    s1 = ft_memchr(src, 'k', strlen(src));
    s2 = memchr(src, 'k', strlen(src));
    printf("ft_memchr = %s\n", s1);
    printf("   memchr = %s\n", s2);

    // ft_memcmp
    printf("________________________________________________\n");
    int a = memcmp("aaasasasFA", "aaasasasFA", 15);
    int b = ft_memcmp("aaasasasFA", "aaasasasFA", 15);
    printf("ft_memcmp = %i\n   memcmp = %i\n", b, a);

    // ft_strlen
    printf("________________________________________________\n");
    char ch[]={'g', 's', '\0'};
    printf("ft_strlen: %ld\n", ft_strlen(ch));
    printf("   strlen: %ld\n", strlen(ch));
    
    // ft_strlcpy
    printf("________________________________________________\n");
    char src7[10] = "aloaloalo";
    char dest7[10];
    char dest8[10];
    ft_strlcpy(dest7, src7, 8);
    strncpy(dest8, src7, 8);
    printf("ft_strlcpy: %s\n", dest7);
    printf("   strncpy: %s\n", dest8);

    //final
    printf("\n");   
    return (0); 
}
