void ft_striter(char *s, void (*f)(unsigned int, char *))
{
    char *s_begin = s;
    while (*s != '\0')
    {
        (*f)(s - s_begin, s);
        s++;
    }
}