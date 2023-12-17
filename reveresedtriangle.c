/* Week 3 ex 6 */

#include <stdio.h>

int reversed_triangle()
{
    int num, i=0, str;

    printf("Insert a positive number: \n");
    scanf("%d", &num);

    while (num >= i) {
        for (str = num; str >= 1; str--) {
            printf("*");
        }
        printf("\n");
        num--;
    }


    return 0;
}
