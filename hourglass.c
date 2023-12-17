/* Week 3 ex 10 */

#include <stdio.h>

int hourglass()
{
    char ch;
    int size, i=0, upper, lower=1, space=0;

    printf("Insert an upper case letter A-Z: \n");
    scanf("%c", &ch);
    printf("Insert an odd number 1-21: \n");
    scanf(" %d", &size);

    upper = size;

    if (ch < 65 || 90 < ch)
    {
        printf("Letter input error.");
        return 1;
    }
    else if (size < 1 || 25 < size)
    {
        printf("Size input error.");
        return 1;
    }
    else if (size % 2 == 0)
    {
        printf("Size is not odd.");
        return 1;
    }
    
    // upper half of hourglass
    while (upper >= 1)
    {
        for (space = 0; space < i; space++) { printf(" "); }
        for (space = 0; space < upper; space++) { printf("%c", ch); }
        printf("\n");
        i++;
        upper -= 2;
    }
    
    // bottom half of hourglass
    ch += 32;
    i--;
    while (lower<=size)
    {
        for (space = 0; space < i; space++) { printf(" "); }
        for (space = 0; space < lower; space++) { printf("%c", ch); }
        printf("\n");
        i--;
        lower += 2;

    }
    return 0;
}
