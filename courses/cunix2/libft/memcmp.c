#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *buff1 = (unsigned char *) s1;
    unsigned char *buff2 = (unsigned char *) s2;
    int diff;

    while (n-- != 0)
    {
        diff = *buff1 - *buff2;
        if (diff != 0)
        {
            return diff;
        }
        buff1++;
        buff2++;
    }

    return 0;
}