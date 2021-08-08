#include <stdio.h>
#define ASCII_ZERO '0'
#define NEGATIVE '-'

int to_digit(char ch)
{
    if (ch == ASCII_ZERO) {
        return 0;
    }
    return ch - ASCII_ZERO;
}

int my_atoi(const char *nptr) {
    int res = 0;
    int sign;
    if (*nptr == NEGATIVE)
    {
        sign = -1;
        nptr++;
    } else {
        sign = 1;
    }

    while (*nptr && *nptr >= '0' && *nptr <= '9')
    {
        int digit = *nptr++ - ASCII_ZERO;
        res = res * 10 + digit;
    }
    return res * sign;
}
