#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    while (n-- > 0)
    {
        *(char *)dst = *(char *)src;
        dst++;
        src++;
    }
    return (void *)(dst - n);
}
