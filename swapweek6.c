/* Main function of the C program. */

#include <stdio.h>

void swap(double* x, double* y)
{
    double temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int swapweek6()
{
    double x = 9.9, y = 6.6;
    swap(&x, &y);
    printf("x = %lf, y = %lf", x, y);

    return 0;
}
