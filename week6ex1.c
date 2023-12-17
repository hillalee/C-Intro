/* Main function of the C program. */

#include <stdio.h>
#define N 100

int get_idx_of_max(int arr[], int n)
{
    int i, num, idx = 0;

    num = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > num)
        {
            num = arr[i];
            idx = i;
        }
    }

    return idx;
}


int week6ex1(void)
{
    int arr1[] = { 3, 7, 1, 9, 5 };
    
    printf("Index of maximum element in arr1: %d\n", get_idx_of_max(arr1, 5));

    int arr2[] = { 5, 5, 5, 5, 5 };
   
    printf("Index of maximum element in arr2: %d\n", get_idx_of_max(arr2, 5));

    int arr3[] = { -2, -5, -1, -9, -3 };
  
    printf("Index of maximum element in arr3: %d\n", get_idx_of_max(arr3, 5));


    return 0;
}