/* Main function of the C program. */

#include <stdio.h>
#include <stdlib.h>

void sort_dec_inc(int a[], int n);

int imdumb()
{
    int a[] = { 6 ,5 ,4 ,3, 4 ,5 };
    int n = sizeof(a) / sizeof(a[0]);

    // Call the sort_dec_inc function
    sort_dec_inc(a, n);

 
    return 0;
}


void sort_dec_inc(int a[], int n)
{
    int i, min = a[0], minidx = 0;

    // min definition
    for (i = 0; i < n; i++)
    {
        if (a[i] <= min)
        {
            min = a[i];
            minidx = i;
        }
    }

    int* b = malloc((n) * sizeof(int));
    int* c = malloc((n) * sizeof(int));
    
    // b and c reset
    for (i = 0; i < n; i++)
    {
        c[i] = 0;
        b[i] = 0;
    }


    // move to two arrays - a is the dec part, b is inc part
    for (i = 0; i <  n - minidx; i++)
    {
        b[i] = a[n - i - 1];
        a[n - i - 1] = 0;
    }
    
    //start adding the arrays
    int ia = 0, ib = 0, ic = 0;
    while (ia < n && ib < n ) {
        if (a[ia] <= b[ib] || a[ia] != 0 || b[ia] != 0)
        {
            c[ic] = a[ia];
            ia++;
        }
        else {
            c[ic] = b[ib];
            ib++;
        }
        ic++;
    }
    

    //add the rest of the array
    for (; ia < n; ia++)
    {
        if (a[ia] != 0)
        {
            c[ic] = a[ia];
            ic++;
        }
    }
       
    for (; ib < n; ib++)
    {
        
        if (b[ib] != 0)
        {
            c[ic] = b[ib];
            ic++;
        }
    }
       


    // Print the sorted array
    for (int i = 0; i < n; i++)
    {
        printf(" %d", c[i]);
    }

}