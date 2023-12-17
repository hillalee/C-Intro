#include <stdio.h>
#define N 10

void print_set(int arr[], int n)
{
	int i, j, num, rc = 0;
	
	for (i = 0; i < n; i++)
	{
		num = arr[i];
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] == num)
			{
				rc = 1;
			}
		}
		if (rc == 0)
		{ 
			printf("%d ", num);
		}
		rc = 0;
	}

}

int week6ex2(void)
{
	int arr[] = { 4, 6, 1, 3, 4, 1, 8, 9, 6, 4 };
	int n = 10;
	
	print_set(arr, n);
	return 0;
}
