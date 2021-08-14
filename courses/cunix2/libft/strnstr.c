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

unsigned int my_strlen(const char *s)
{
    int len = 0;
    while (s[len])
    {
        len++;
    };
    return len;
}

char *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    int sub_len = my_strlen(needle);
    int len = my_strlen(haystack);
    if (len < sub_len || len < n || sub_len < n)
    {
        return NULL;
    }
    for (int i = 0; i < n - sub_len; i++)
    {
        if (compare(haystack, needle))
        {
            return (char*) haystack;
        }
        haystack++;
    }
    return NULL;
}
