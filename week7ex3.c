/* Main function of the C program. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM_WORDS 3
#define N 10

void initWords(char* w1, char* w2, char* w3)
{
	printf("Enter a word: \n");
	scanf("%10s", w1);
	printf("Enter a word: \n");
	scanf("%10s", w2);
	printf("Enter a word: \n");
	scanf("%10s", w3);
	
}
char* concatWords(char* w1, char* w2, char* w3)
{
	int val = strlen(w1) + strlen(w2) + strlen(w3);
	char* dest = malloc((val + 1) * sizeof(char));
	strcpy(dest, w1);
	strcat(dest, w2);
	strcat(dest, w3);

	return dest;
}
void printReversedWord(char* word)
{
	int i, len = strlen(word);
	printf("%s ->", word);

	for (i = len - 1; 0 <= i; i--)
	{
		printf("%c", word[i]);
	}
}

int week7ex3()
{
	char word1[N + 1];
	char word2[N + 1];
	char word3[N + 1];
	char* longWord;
	initWords(word1, word2, word3);
	longWord = concatWords(word1, word2, word3);
	printReversedWord(longWord);
	free(longWord);
	return 0;
}
