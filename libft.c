#include "libft.h"
#include <stddef.h>
#include <stdio.h> 

void *ft_memset(void *s, int c, size_t n)

{

	size_t  a;
	unsigned char   *p;

	a = 0;
	p = s;
	while (a < n)
    {
		p[a] = (unsigned char)c;
        a++;
    }
    return (p);
}
