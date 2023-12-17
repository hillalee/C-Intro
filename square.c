/* Week 2 ex 4 */

#include <stdio.h>

int main_square()
{
    int num, square_num;
    printf("Enter a number, 0 - 1,000,000: \n");
    scanf("%d", &num);
    square_num = num * num;
    printf("Square of your number: %d\n", square_num);


    return 0;
}
