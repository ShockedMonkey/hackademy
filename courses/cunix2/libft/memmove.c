#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
    char *buffer = (char *) malloc(n);

    size_t idx = 0;
    while (idx++ < n && *(char *)src != '\0')
    {
        buffer[idx] = *(char *)src;
        src++;
    }

    idx = 0;
    while (idx++ < n)
    {
        *(char *)(dst) = buffer[idx];
        dst++;
    }

    free(buffer - n);

    return dst;
}
