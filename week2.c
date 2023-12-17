#include <stdio.h>

int main2_temp(void)
{
	int cel_temp=0, fahr_temp=0;

	printf("Enter temp in fahrenheit: ");
	scanf("%d", &fahr_temp);

	cel_temp = (fahr_temp - 32) * 100 / (212 - 32);

	printf("%d fahrenheit = %d celsius\n", fahr_temp, cel_temp);
	return 0;
}
