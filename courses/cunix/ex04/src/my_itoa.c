#include<stdlib.h>
#define BUFF_SIZE 12 // as 12 bytes is max for integer repr

void reverse(char *target, int len)
{
    for (int i = 0; i < len / 2; i++)
    {
        int tmp = target[i];
        target[i] = target[len - i - 1];
        target[len - i - 1] = tmp;
    }
}

char *my_itoa(int nbr)
{
    int len = 0;
    char *buff = malloc(sizeof(char) * BUFF_SIZE);
    int sign = nbr >= 0 ? 1 : -1;
    nbr *= sign;
    do
    {
        buff[len++] = nbr % 10 + '0';
        nbr = nbr / 10;
    }
    while (nbr > 0);

    if (sign == -1)
    {
        buff[len++] = '-';
    }
    buff[len] = '\0';
    reverse(buff, len);
    return buff;
}
