/* Week 3 ex 7 */

#include <stdio.h>
#define LEN 6

int ex7777777777777()
{
    int i, num=0;
    int array[LEN] = { 0 };
    
    while (1)
    {
        printf("Insert a number: ");
        scanf(" %d", &num);

        if (num == 0)
        {
            break;
        }
        
        for (i = 1; i <= LEN - 2; i++)
        {
            array[i - 1] = array[i];
        }
        
        array[LEN - 2] = num;

    }

    for (i = 0; i < LEN - 1 ; i++)
    {
        printf("%d ", array[i]);
    }


    return 0;
}
