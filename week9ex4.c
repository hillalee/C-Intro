/* Main function of the C program. */

#include <stdio.h>
void list_uup(int n);
//week9ex4
int week9ex4()
{
	int n;
	printf("Enter a number: \n");
	while (1)
	{
		scanf("%d", &n);
		if (n < 1)
			break;
		printf("numbers are: \n");
		list_uup(n);
	}
	return 0;
}

void list_uup(int n)
{
	if (n == 0)
	{
		return;
	}
	
	list_uup(n - 1);
	printf("%d ", n);

	return;
}
