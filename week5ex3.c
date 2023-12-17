# include <stdio.h>

int a = 2;

int login(int id)
{
	int static counter = 0;
	int rc = 1;
	if (counter == 0)
	{
		if (id < 0)
		{
			rc = 0;
		}
		counter++;
	}
	else
	{
		if (id != a)
		{
			rc = 0;
		}
	}

	return rc;

}

int week5ex3(void)
{
	int num, b = 0;

	printf("Enter ID: \n");
	scanf("%d", &num);
	a = login(num);
	if (a != 0)
	{
		a = num;
	}
	else
	{
		printf("Entered illegal number. Try again.");
		return 1;
	}

	while (b != 1)
	{
		
		printf("Enter ID: \n");
		scanf("%d", &num);
		b = login(num);
		if (b == 1)
		{
			break;
		}
		printf("Invalid ID. ");
	}

	printf("You logged in!");

	return 0;
}