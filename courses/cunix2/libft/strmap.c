
unsigned int my_strlen(const char *s)
{
    int len = 0;
    while (s[len])
    {
        len++;
    };
    return len;
}

char *ft_strmap(char const *s, char (*f)(unsigned int, char))
{
    const char *s_begin = s;
    unsigned int len = my_strlen(s);
    char *res = (char *) malloc(sizeof(char) * (len + 1));

    for (; *s != '\0'; s++, res++)
    {
        *res = (*f)(s - s_begin, *s);
    }
    *res = *s;

    return (res - len);
}