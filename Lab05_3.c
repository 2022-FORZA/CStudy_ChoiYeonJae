#include <stdio.h>
// baekjoon 1427

void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	long long input;
	int arr[11], i = 0;
	scanf("%lld", &input);
	while (input > 0)
	{
		arr[i] = input % 10;
		input /= 10;
		i++;
	}

	for (int j = 0; j < i - 1; j++)
	{
		for (int k = 0; k < i - 1 - j; k++) if (arr[k] < arr[k + 1]) swap(&arr[k], &arr[k + 1]);
	}

	for (int k = 0; k < i; k++) printf("%d", arr[k]);
	return 0;
}