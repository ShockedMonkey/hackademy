#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *buff = (unsigned char *) s;
    while (n-- > 0)
    {
        if (*buff == (char) (c % 256))
        {
            return (void *) buff;
        }
        buff++;
    }
    return NULL;
}
