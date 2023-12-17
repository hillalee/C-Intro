/* Main function of the C program. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int str2int(char* str)
{
    int i, num = 0;
    for (i = 0; i < strlen(str); i++)
    {
        num += (str[i] - '0');
        num = num * 10;
    }
    num = num / 10;
    return num;
}


int week7ex4()
{
    int num = 0;
    num = str2int("6892");
    printf("%d", num);
    return 0;
}
