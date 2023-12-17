/* Week 3 ex 9 */

#include <stdio.h>

int parallelogram()
{
    int num, space, width, i = 0, a = 65;
    printf("Insert a number 0-26: \n");
    scanf("%d", &num);

    if (num < 0 || num>26)
    {
        printf("Size input error.");
    }
    else
    {
        for (i = 0; i < num; i++)
        {

            for (space = 0; space < i; space++)
            {
                printf(" ");
            }
            for (width = 1; width <= num; width++)
            {
                printf("%c", a);
            }
            printf("\n");
            a++;
        }
    }

    return 0;
}
