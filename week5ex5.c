#include <stdio.h>


int primeex5(int n)
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

void factorization(unsigned int num)
{
	int i = 2, a = num , flag = 0;
	if (primeex5(num) == 1)
	{
		printf("%d", num);
	}
	else 
	{
		while (a != 1, i < num)
		{
			if (a % i == 0)
			{
				printf(" %d ", i);
				a = a / i;
			}
			else
			{
				i++;
			}
		}
	/*	for (i = 1; i < (num + 1); i++)
		{
			if (primeex5(i) == 1)
			{
				a = num / i;
				if (primeex5(a) == 1)
				{
					printf("Numbers are: %d, %d", i, a);
					break;
				}
			}
		}*/
	}
	return;
}


int week5ex5(void)
{
	int num;

	printf("Enter a number: \n");
	scanf("%d", &num);
	factorization(num);



	return 0;
}