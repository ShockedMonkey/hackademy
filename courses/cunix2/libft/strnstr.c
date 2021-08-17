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

size_t my_strlen(const char *s)
{
    int len = 0;
    while (s[len])
    {
        len++;
    };
    return (size_t) len;
}

char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    size_t sub_len = my_strlen(needle);
    size_t len = my_strlen(haystack);
    if (len < sub_len || len < n || sub_len < n)
    {
        return NULL;
    }
    for (size_t i = 0; i < n - sub_len; i++)
    {
        if (compare(haystack, needle))
        {
            return (char*) haystack;
        }
        haystack++;
    }
    return NULL;
}
