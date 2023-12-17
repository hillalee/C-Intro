/* Main function of the C program. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_VAL 10
#define MIN_VAL 1
#define N 15

char* randWord()
{
	int i, val;

	val = rand() % (MAX_VAL - MIN_VAL) + MIN_VAL;
	char* word = malloc((val + 1) * sizeof(char));
	for (i = 0; i < val; i++)
	{
		word[i] = rand() % ('z' - 'a') + 'a';
	}
	word[val] = '\0';
	return word;
}

int week7ex2()
{
	char* s;
	int i;
	srand(time(NULL));
	for (i = 0; i < N; i++)
	{
		s = randWord();
		printf("%s\n", s);
		free(s);
	}
	return 0;
}


