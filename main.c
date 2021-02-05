#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#include <ctype.h>
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

    // ft_strlcat
    printf("________________________________________________\n");
    char src9[16] = "marco";
    char dest9[16] = "aurelio";
    ft_strlcat(dest9, src9, 15);
    printf("ft_strlcat: %s\n", dest9);

    // ft_strchr
    printf("________________________________________________\n");
    printf("ft_strchr: %p, %s\n", ft_strchr(src, '\0'), ft_strchr(src, '\0'));
    printf("   strchr: %p, %s\n", strchr(src, '\0'), strchr(src, '\0'));

    // ft_strrchr
    printf("________________________________________________\n");
    printf("ft_strrchr: %p, %s\n", ft_strrchr(src, 'k'), ft_strrchr(src, 'k'));
    printf("   strrchr: %p, %s\n", strrchr(src, 'k'), strrchr(src, 'k'));

    //ft_strnstr
    printf("________________________________________________\n");
    printf("ft_strnstr: %p, %s\n", ft_strnstr(src, "", 50), ft_strnstr(src, "", 50));

    //ft_atoi
    char val[] = "          +5341+53135";
    printf("________________________________________________\n");
    printf("ft_atoi: %i\n", ft_atoi(val));
    printf("   atoi: %i\n", atoi(val));

    //ft_isalpha
    printf("________________________________________________\n");
    printf("ft_isalpha: %i\n", ft_isalpha(123));
    printf("   isalpha: %i\n", isalpha(123));

    //ft_isdigit
    printf("________________________________________________\n");
    printf("ft_isdigit: %i\n", ft_isdigit(58));
    printf("   isdigit: %i\n", isdigit(58));

    //ft_isalnum
    printf("________________________________________________\n");
    printf("ft_isdigit: %i\n", ft_isalnum(104));
    printf("   isdigit: %i\n", isalnum(104));

    //ft_isascii
    printf("________________________________________________\n");
    printf("ft_isascii: %i\n", ft_isascii(126));
    printf("   isascii: %i\n", isascii(126));

    //ft_isprint
    printf("________________________________________________\n");
    printf("ft_isprint: %i\n", ft_isprint(32));
    printf("   isprint: %i\n", isprint(32));

    //ft_toupper
    printf("________________________________________________\n");
    printf("ft_toupper: %i\n", ft_toupper(74));
    printf("   toupper: %i\n", toupper(74));

    //ft_tolower
    printf("________________________________________________\n");
    printf("ft_tolower: %i\n", ft_tolower(74));
    printf("   tolower: %i\n", tolower(74));

    //ft_calloc
    printf("________________________________________________\n");
    printf("ft_calloc: %p\n", ft_calloc(5, 4));
    printf("   calloc: %p\n", calloc(5, 4));

    //ft_strdup
    printf("________________________________________________\n");
    printf("ft_strdup: %s\n", ft_strdup(src));
    printf("   strdup: %s\n", strdup(src));

    //ft_substr
    printf("________________________________________________\n");
    printf("ft_substr: %s\n", ft_substr(src, 1, 20));

    //ft_strjoin
    printf("________________________________________________\n");
    printf("ft_strjoin: %s\n", ft_strjoin(src, src9));

    //ft_strtrim
    printf("________________________________________________\n");
    printf("ft_strtrim: %s\n", ft_strtrim(src, "GEe"));

    //ft_split
    printf("________________________________________________\n");
    printf("ft_split: %s\n", ft_split("abckdefkijklmn", 'k')[0]);

    //final
    printf("\n");   
    return (0);
}
