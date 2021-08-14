#include "libft.h"

int compare(const char *s1, const char *s2)
{
    while (*s1 && *s2)
    {
        if (*s1 != *s2)
        {
            return 0;
        }
        s1++;
        s2++;
    }
    return *s2 == '\0';
}

char *ft_strstr(const char *haystack, const char *needle)
{
    while (*haystack != '\0')
    {
        if (compare(haystack, needle))
        {
            return haystack;
        }
        haystack++;
    }
    return NULL;
}