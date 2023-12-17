/* Week 3 ex 7 */

#include <stdio.h>

int smallest_num()
{
    int num = 0, num2;
    printf("Insert a number: ");
    scanf("%d", &num);
    printf("Smallest number so far is %d\n", num);

    while (num > 0) 
    {
        printf("Insert a number: ");
        scanf("%d", &num2);
        if (num2 < num)
        { 
            num = num2; 
        }
        printf("Smallest number so far is %d\n", num);

    }



    return 0;
}
