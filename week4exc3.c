/* Main function of the C program, returns only unique values */

#include <stdio.h>
#define N 10
// can't make it work cuz I am very dumb

int w4e3()
{
    int first[N], second[N] = { 0 };
    int i, j, check = 0;
    
    printf("Enter 10 numbers: \n");
    for (i = 0; i <= N - 1; i++)
    { 
        scanf(" %d", &first[i]);
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (first[i] == second[j])
            {
                check = 1;
                break;
            }

        }
        
    }

    for (i = 0; i < N; i++)
    {
        if (second[i] != 0)
        {
            printf("%d", second[i]);
        }
    }


    return 0;
}
