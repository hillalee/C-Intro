// fibonachi series
// week 5 ex 4, from pdf

#include <stdio.h>

int calcFibElement(int n)
{
	int x = 0, y = 1, sum = 0;
	int i, rc = 1;

	if (n < 0)
	{
		sum = 0;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			sum = x + y;
			x = y;
			y = sum;

		}
	}
	rc = sum;
	return rc;

}


int week5ex4(void)
{
	int n, rc = 1;
	
	while (1)
	{
		printf("Enter a number in Fib: \n");
		scanf("%d", &n);
		rc = calcFibElement(n);
		if (rc == 0)
		{
			break;
		}

		printf("a%d is %d\n", n, rc);
	}

	return 0;
}