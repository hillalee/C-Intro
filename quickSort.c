void quick_sort(int a[], int n) {
	if (n <= 1) {
		return;
	}
	int p;
	p = partition(a, n, 0);
	quick_sort(a, p);
	quick_sort(a + p + 1, n - p - 1);
}