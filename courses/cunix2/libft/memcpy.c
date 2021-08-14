#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    while (n-- > 0)
    {
        *(char *)dst = *(char *)src;
        dst++;
        src++;
    }
    return (void *)(dst - n);
}