#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_reversed(int *arr)
{
	int x; 
	if (arr[0] == 0)
	{
		return;
	}
	x = *arr;
	print_reversed(++arr);
	printf("%d ", x);
	
}
// their solution 
void their_reversed()
{
	int num = 0;
	scanf("%d", &num);
	if (num == 0)
		return;
	their_reversed();
	printf("%d\n", num);
}


int week9reversed(void)
{

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 0 };

	const int len = sizeof(arr) / sizeof(arr[0]);

	print_reversed(arr);

	return 0;
}