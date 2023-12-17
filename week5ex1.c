#include <stdio.h>

int numOfZeros(unsigned int num)
{
	int i, count = 0;

	while (num >= 10)
	{
		if (num % 10 == 0)
		{
			count++;
		}
		num = num / 10;

	}

	return count;
}

int PrintNumOfZeros(void)
{
	unsigned int num, count=1;

	do
	{
		printf("Insert a whole, positive number: \n");
		scanf(" %u", &num);

		count = numOfZeros(num);
		printf("Number of zeros is: %d\n", count);
	} 
	while (count != 0);
	
	return 0;
}
