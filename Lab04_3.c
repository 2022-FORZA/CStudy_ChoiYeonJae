#include <stdio.h>
#include <stdlib.h>

// baekjoon 1546

int main()
{
	int n;
	double sum = 0, max = 0;
	scanf("%d", &n);
	double* arr = (double*)malloc(sizeof(double) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &arr[i]);
		if (arr[i] > max) max = arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		arr[i] = arr[i] / max * 100;
		sum += arr[i];
	}

	printf("%.10lf", sum / n);
	return 0;
}