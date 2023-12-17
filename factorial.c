
#include <stdio.h>

int main_factorial()
{
    int factorial = 1, n, i;
    printf("Enter a positive number: \n");
    scanf("%d", &n);
    if (n < 0) {
        printf("Can't factorial on a negative number. \n");
    }
    else {

        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d is %d", n, factorial);
    }

    return 0;
}
