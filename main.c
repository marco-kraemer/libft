#include <stdio.h>
#include "libft.h"

int main() 

{
    char str[50] = "GeeksForGeeks is for programming geeks."; 
	printf("\nBefore memset(): %s\n", str); 
    ft_memset(str + 13, '.', 8*sizeof(char)); 
    printf("After memset():  %s\n", str); 
    return 0; 
}
