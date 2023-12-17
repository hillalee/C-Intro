#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN_VAL 55
#define MAX_VAL 100
int random()
{
	int i;
	srand(time(NULL));
	for (i = 0; i < 5; i++)
		printf("%d\n", rand() % (MAX_VAL - MIN_VAL) + MIN_VAL);
	return 0;
}