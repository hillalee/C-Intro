/* Main function of the C program. */

#include <stdio.h>
void list_down(int n);

int week9ex3()
{
	int n;
	printf("Enter a number: \n");
	while (1)
	{
		scanf("%d", &n);
		if (n < 1)
			break;
		printf("numbers are: \n");
		list_down(n);
	}

	return 0;
}

void list_down(int n)
{
	if (n == 0)
	{
		return;
	}
	printf("%d ", n);
	list_down(n - 1);
}
