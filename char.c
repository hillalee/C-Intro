/* Week 2 ex 3 */

#include <stdio.h>

int main_char()
{
	char ch, next_ch, small_ch;

	printf("Please enter a character between a-z or A-Z: \n");
	scanf("%c", &ch);
	printf("Your character: %c, ASCII value: %d\n", ch, ch);
	next_ch = ch + 1;
	printf("Following character is: %c\n", next_ch);
	printf("Enter a small case character: \n");
	scanf(" %c", &small_ch);
	small_ch = small_ch - 32;
	printf("Upper case character is: %c", small_ch);

	return 0;
}
