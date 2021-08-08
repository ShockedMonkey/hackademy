#include <stdio.h>
#include <string.h>

int my_strcmp(char *str1, char *str2)
{
    int ch_p1 = *str1++;
    int ch_p2 = *str2++;
    while (ch_p1 == ch_p2)
    {
        ch_p1 = *str1++;
        ch_p2 = *str2++;

        if (ch_p1 == '\0')
        {
            break;
        }
    }
    if (ch_p1 < ch_p2)
    {
        return -1;
    }
    return ch_p1 > ch_p2;
}
