/* Main function of the C program. */

#include <stdio.h>
#include <stdlib.h>
void sort_bin_arr(int arr[], int n);



int week10ex2()
{
    int arr[] = { 1, 0, 1, 0, 0, 0, 0, 1, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    sort_bin_arr(arr, n);
    return 0;
}

void sort_bin_arr(int arr[], int n)
{
    int hist[2] = { 0 };
    int i, j;

    //make a histogram
    for (i = 0; i < n; i++)
    {
        j = arr[i];
        hist[j]++;
    }

    //add  the 0's
    for (i = 0; i < hist[0]; i++)
    {
        arr[i] = 0;
    }

    //add the 1's
    for (i = 0; i <= hist[1]; i++)
    {
        arr[n - i] = 1;
    }

    //print the array
    for (i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
}

