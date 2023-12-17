/* Main function of the C program. */

#include <stdio.h>
#include <stdlib.h>

int  calcWeight(char* str)
{
    int i, weight = 0;
    for (i = 0; i < strlen(str); i++)
    {
        weight += (str[i] - 'a' + 1);
    }

    return weight;
}


char* maxWeight(char* strings[], int n)
{
    int i, weight = 0, rc = 1;

    for (i = 0; i < n; i++)
    {
        if (calcWeight(strings[i]) > weight)
        {
            weight = calcWeight(strings[i]);
            rc = i;
        }
    }
    return strings[rc];
}

int week7ex6()
{
    // Test 1: calcWeight
    char* word1 = "hello";
    char* word2 = "world";
    char* word3 = "babble";
    printf("Weight of \"%s\" is %d\n", word1, calcWeight(word1));
    printf("Weight of \"%s\" is %d\n", word2, calcWeight(word2));
    printf("Weight of \"%s\" is %d\n", word3, calcWeight(word3));

    // Test 2: maxWeight
    char* words1[] = { "apple", "banana", "cherry", "date" };
    int num_words1 = sizeof(words1) / sizeof(words1[0]);
    char* max1 = maxWeight(words1, num_words1);
    printf("The word with the maximum weight is: %s\n", max1);

    char* words2[] = { "hello", "world", "hey" };
    int num_words2 = sizeof(words2) / sizeof(words2[0]);
    char* max2 = maxWeight(words2, num_words2);
    printf("The word with the maximum weight is: %s\n", max2);

    char* words3[] = { "aaa", "bbb", "ccc" };
    int num_words3 = sizeof(words3) / sizeof(words3[0]);
    char* max3 = maxWeight(words3, num_words3);
    printf("The word with the maximum weight is: %s\n", max3);

    return 0;
}

