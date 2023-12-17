/* Main function of the C program. */

#include <stdio.h>
int max(int arr[], int n);

//week9ex6
int week9ex6()
{
    int arr[] = { 300,2,44,700,1,15,25,40 };
    printf("The index is: %d\n", max(arr, 8));
    return 0;
}
//chatGPT
int max(int arr[], int n)
{
    if (n == 1) {
        return 0;
    }

    int max_index = max(arr, n - 1);

    if (arr[n - 1] > arr[max_index]) {
        return n - 1;
    }

    return max_index;
}