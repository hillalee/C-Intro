#include <stdio.h>
#define N 10
int hist[N] = { 0 };



int histOfNum(int num)
{
	int a = 1;
	while (num > 0)
	{
		a = num % 10;
		hist[a]++;
		num = num / 10;
	}
	return 0;
}

int all_digits_different(void)
{
	int i, rc = 1;

	for (i = 0; i < N; i++)
	{
		if (hist[i] >= 2)
		{
			rc = 0;
			break;
		}
	}
	return rc;
}

int week5ex2(void)
{
	int num = 0, i = 0, rc = 0, count = -1;

	while (rc != 1)
	{
		printf("Enter a number: \n");
		scanf("%d", &num);
		histOfNum(num);
		rc = all_digits_different();
		count++;
		for (i = 0; i < N; i++)
		{
			hist[i] = 0;
		}
	}

	printf("Number without repeated digits: %d\nNum of numbers entered before: %d\n", num, count);

	return 0;

}