/* Main function of the C program. */

#include <stdio.h>
#define N 10

int reversed_array()
{
    int arr[N];
    int i;

    for (i = 0; i <= N - 1; i++)
    {
        printf("Enter a number: \n");
        scanf("%d", &arr[i]);
    }

    for (i = 1; i <= N; i++)
    {
        printf("%d ", arr[N - i]);
    }

    return 0;
}