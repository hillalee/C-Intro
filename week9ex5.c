/* Main function of the C program. */

#include <stdio.h>
unsigned int ladder(unsigned int n);

int week9ex5()
{
    unsigned int n, num;

    n = 6;
    num = ladder(n);
    printf("%d", num);
    return 0;
}

unsigned int ladder(unsigned int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return ladder(n - 1) + ladder(n - 2); 
    }

}
