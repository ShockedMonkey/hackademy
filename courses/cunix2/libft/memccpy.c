#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    while (n-- > 0)
    {
        if ((*(char *) dst = *(char *) src) == c)
        {
            return dst;
        }
        dst++;
        src++;
    }
    return NULL;
}