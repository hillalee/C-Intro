#include <stdio.h>

int main_Euclidean()
{
    int m, n, modul=0;
    printf("Enter two positive numbers: \n");
    scanf("%d %d", &m, &n);
    while (1) {
        if (m%n == 0) { break; }
        modul = m % n;
        m = n;
        n = modul;
       
    }
    printf("the GCD is: %d", modul);

    return 0;
}
