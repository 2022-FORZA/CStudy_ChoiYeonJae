#include <stdio.h>
#include <stdlib.h>
// baekjoon 5545

int compare(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;
	if (num1 > num2) return 1;
	else if (num1 == num2) return 0;
	else return -1;
}

int main()
{
	int n, a, b, c, toppingSum=0;
	scanf("%d", &n);
	scanf("%d %d", &a, &b);
	scanf("%d", &c);

	int* topping = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &topping[i]);
		toppingSum += topping[i];
	}
	qsort(topping, n, sizeof(int), compare);

	int calory = c + toppingSum;
	int price = a + b * n;
	int result = calory/price;

	for (int i = 0; i<n; i++)
	{
		toppingSum -= topping[i];
		calory = c + toppingSum;
		price = a + b * (n - 1 - i);
		int r = calory / price;
		if (result < r) result = r;
	}
	printf("%d", result);
	free(topping);
	return 0;
}