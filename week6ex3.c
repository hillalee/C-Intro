#include <stdio.h>
#define N 10
#define A 26

void how_many(char char_arr[], int n, int count_arr[])
{
	char ch;
	int i, num;
	int* p = count_arr;
	for (i = 0; i < n; i++)
	{
		num = char_arr[i] - 97;
		count_arr[num]++;
	}

	printf("how_many \t Letter \n _________________\n");
	for (i = 0; i < A; i++)
	{
		ch = i + 97;
		printf("%d \t\t %c \n", count_arr[i], ch);
	}
}

int week6ex3(void)
{
	char char_arr[N] = { 0 };
	int i, count_arr[A] = { 0 };

	printf("Enter 10 lowercase letters: \n");
	for (i = 0; i < N; i++)
	{
		scanf(" %c", &char_arr[i]);
	}
	how_many(char_arr, N, count_arr);
	
	
	return 0;
}