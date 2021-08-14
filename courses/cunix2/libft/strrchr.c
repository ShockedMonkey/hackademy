#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i = 0;
    char *last_occurrence = NULL;
    do
    {
        if (s[i] == c % 256)
        {
            last_occurrence = (char *)(s + i);
        }
        i++;
    } while (s[i]);
    return last_occurrence;
}