#include <stdio.h>
#define N 100

int sieve(void)
{
	int i, k;
	int a[N + 1];
	
	for (k = 2; k <= N; i += k)
	{
		if (a[k] == 0) { continue; }
	
		for (i = k * 2; i <= N; i += k)
		{
			a[i] = 0;
		}
	}
	for (k = 2; k <= N; k++)
	{
		if (a[k] == 1)
		{
			printf("%d ", k);
		}
	}
	printf("\n");
	return 0;
}