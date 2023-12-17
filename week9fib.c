#include <stdio.h>

int fib(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 1;
    }

    int rc = fib(n - 1) + fib(n - 2);
    return rc;
}

int week9fib()
{
    int n = 6; // You can change this to any positive integer to find the nth Fibonacci number.
    int result = fib(n);

    printf("The %dth Fibonacci number is: %d\n", n, result);

    return 0;
}
