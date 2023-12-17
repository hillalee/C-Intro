/* Main function of the C program. */

#include <stdio.h>
#include <string.h>
#define N 10

int week4ex2()
{
    char first[N], second[N];
    int i, j = 0, lenFirst, lenSecond, found = 0;
    char c;

    strcpy(first,"x abc abd");
    strcpy(second,"abx");
    lenFirst = strlen(first);
    lenSecond = strlen(second);
    //printf("Length of first Array: \n");
    //scanf("%d", &lenFirst);

    //printf("First Array: \n");
    //for (i = 0; i < lenFirst; i++)
    //{
    //    scanf(" %c", &first[i]);
    //}


    //printf("Length of second Array: ");
    //scanf(" %d", &lenSecond);

    //printf("Second Array: ");
    //for (i = 0; i < lenSecond; i++)
    //{
    //    scanf(" %c", &second[i]);
    //}

    
    for (i = 0; i < lenFirst; i++)
    {
        if (first[i] == second[0])
        {
            int firstIndex  = i + 1;
            int secondIndex = 1;
            found = 1;
            for (j = firstIndex; j < firstIndex + lenSecond - 1; j++, secondIndex++)
            {
                if (first[j] != second[secondIndex])
                {
                    found = 0;
                    break;
                }
            }
            if (found == 1)
            {
                printf("Found array second in first");                
                break;
            }
        }
    }
    if (found == 0)
    {
        printf("Didn't find array second in first");
    }

}