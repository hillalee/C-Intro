#include <stdio.h>

int prime(int n)
{
	int rc = 1;
	int i;

	if (n == 1 || n == 2)
	{
		rc = 1;
	}
	else
	{

		for (i = 2; i <= n / 2; ++i) {

			if (n % i == 0)
			{
				rc = 0;
				break;
			}
		}
	}
	
	return rc;
}


int goldbachs(void)
{
	int num, i;
	int a;

	printf("Enter an even number: ");
	scanf("%d", &num);


	for (i = 1; i < (num + 1) / 2; i++)
	{
		if (prime(i) == 1)
		{
			a = num - i;
			if (prime(a) == 1)
			{
				printf("Numbers are: %d, %d", i, a);
				break;
			}
		}
	}


	return 0;
}