#include <string.h>
#include <stdio.h>
#include <unistd.h>

#define SUCCESS_CODE 1

int my_puts(const char *s)
{
    int len = strlen(s);
    while (len > 0)
    {
        int amount = write(STDOUT_FILENO, s, len);
        if (amount == -1)
        {
            return EOF;
        }

        s += amount;
        len -= amount;
    }
    char new_line = '\n';
    write(STDOUT_FILENO, &new_line, 1);
    return SUCCESS_CODE;
}
