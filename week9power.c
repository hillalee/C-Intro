

double power(double n, int x)
{
	if (n == 0)
	{
		return 1;
	}
	x = power(n - 1, x) * x;
	return x;
}

int week9power(void)
{
	double p = power(7, 3);
	printf("%lf", p);

	return 0;
}