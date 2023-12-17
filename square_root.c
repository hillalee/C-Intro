#include <stdio.h>
#include <math.h>

int main_root(void)
{
	double a, b, c;
	double x1, x2;
	double disc;

	printf("Enter the coefficients (a, b and c): \n");
	scanf("%lf %lf %lf", &a, &b, &c);

	disc = b * b - 4 * a * c;
	if (disc >= 0) {
		x1 = (-b + sqrt(disc)) / (2 * a);
		x2 = (-b - sqrt(disc)) / (2 * a);
		printf("The roots of the equation are: \nX1: %f, X2: %f", x1, x2);
	}
	else {
		printf("Math error. Can't sqrt of negative numbers. Try again");
	}

	return 0;
}