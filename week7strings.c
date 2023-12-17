#include <stdio.h>
#define N 21

void to_lower(char* str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] += ('a' - 'A');
		}
	}

	printf("%s", str);

}

int week7strings(void)
{

	char str[N];

// how do i use p?
	printf("Enter a sentence: \n");
	scanf("%20s", &str);
	to_lower(str);

	// chatGPT solution:
	//char* p = malloc(N * sizeof(char)); // Allocate memory for a string

	//if (!p)
	//{
	//	fprintf(stderr, "Memory allocation failed.\n");
	//	return 1;
	//}

	//printf("Enter a sentence (up to 20 characters):\n");
	//scanf("%20[^\n]%*c", p); // Read characters until newline, up to 20 characters

	//to_lower(p);

	//free(p); // Free dynamically allocated memory
	return 0;
}