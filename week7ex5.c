/* Main function of the C program. */

#include <stdio.h>
#include <stdlib.h>



void print_res(int res, char* s1, char* s2)
{
    if (res == 0)
        printf("%s == %s\n", s1, s2);
    else if (res > 0)
        printf("%s > %s\n", s1, s2);
    else
        printf("%s < %s\n", s1, s2);
}

int strcmp(char* str1, char* str2)
{
    int rc = 0, i, val1 = 0, val2 = 0;

    for (i = 0; i < strlen(str1); i++)
    {
        val1 += str1[i];
    }
    for (i = 0; i < strlen(str2); i++)
    {
        val2 += str2[i];
    }
    if (val1 > val2)
    {
        rc = 1;
    }
    else if (val1 < val2)
    {
        rc = -1;
    }
    
    return rc;
}


int week7ex5()
{
    char* s1 = "hell";
    char* s2 = "hello";
    char* s3 = "Hello";
    char* s4 = "Hello";

    print_res(strcmp(s1, s2), s1, s2);
    print_res(strcmp(s2, s3), s2, s3);
    print_res(strcmp(s3, s4), s3, s4);

    return 0;
}