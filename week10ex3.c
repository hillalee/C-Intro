/* Main function of the C program. */

#include <stdio.h>
#include <stdlib.h>
int find_missing(int a[], int b[], int n);

int main()
{
    int a[] = { 1, 3, 5, 7, 9 };
    int b[] = { 1, 3, 5, 7, 8, 9 };

    int n = sizeof(a) / sizeof(a[0]);

    int missing_element = find_missing(a, b, n);

    printf("The missing element is: %d\n", missing_element);

    return 0;
}

int find_missing(int a[], int b[], int n)
{
    int i;
    int missing = b[n-1];

    for (i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            missing = b[i];
        }
    }


    return missing;
}


