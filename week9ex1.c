/* Main function of the C program. */

#include <stdio.h>
int sum(int n);

int week9ex1()
{
	int n;
	printf("Enter a number: \n");
	while (1)
	{
		scanf("%d", &n);
		if (n < 1)
			break;
		printf("Sum is: %d\n", sum(n));
	}
	return 0;
}

int sum(int n)
{
	if (n == 1)
	{
		return 1;
	}
	n += sum(n - 1);
	return n;
}
