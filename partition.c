int partition(int a[], int n, int x)
{
	int count = 0;
	int i;
	for (i = 0; i < n; i++) {
		if (a[i] < a[x]) count++;
	}
	swap(a + x, a + count);
	int j;
	i = 0; j = n - 1;
	while (i < count) {
		if (a[i] >= a[count]) {
			swap(a + i, a + j);
			j--;
		}
		else {
			i++;
		}
	}
	return count;
}