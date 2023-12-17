/* Main function of the C program. */

#include <stdio.h>
#define N 10
#define GRADES 101

int ex4()
{
    int grades[N], hist[GRADES] = { 0 };
    int i, g;
    
   

    printf("Enter 10 integer grades: \n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &grades[i]);
    }

    for (i = 0; i < N; i++)
    {
        g = grades[i];
        hist[g]++;
    }

    for (i = 0; i < GRADES; i++)
    {
        if (hist[i] != 0)
        {
            printf("%d appears %d times", i, hist[i]);
            printf("\n");
        }
    }

    return 0;
}