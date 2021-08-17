#include "libft.h"

unsigned int my_strlen(const char *s)
{
    int len = 0;
    while (s[len])
    {
        len++;
    };
    return len;
}

char* ft_strdup(const char *s)
{
    int len = my_strlen(s);
    char *copy = (char *) malloc(sizeof(char) * len);
    for (int i = 0; i < len; i++)
    {
        copy[i] = s[i];
    }
    return copy;
}
