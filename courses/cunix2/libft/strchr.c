#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i = 0;
    do
    {
        if (s[i] == c % 256)
        {
            return (char*) s + i;
        }
        i++;
    } while(s[i]);
    return NULL;
}
