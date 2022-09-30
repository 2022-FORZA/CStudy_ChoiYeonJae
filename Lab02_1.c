#include <stdio.h>
#include <stdlib.h>

// baekjoon 3273

int compare(const void *a, const void *b);
int binarySearch(int arr[], int n, int find);

int main()
{
	int n, result, count=0;
	scanf("%d", &n);

	int* arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	qsort(arr, n, sizeof(int), compare);
	scanf("%d", &result);

	for (int i = 0; i < n; i++)
	{
		int find = result - arr[i];
		if (binarySearch(arr, n, find) != -1) count++;
	}

	printf("%d", count/2);
	free(arr);
	return 0;
}

int compare(const void* a, const void* b)
{
	int n1 = *(int*)a;
	int n2 = *(int*)b;

	if (n1 < n2) return -1;
	else if (n1 > n2) return 1;
	else return 0;
}

int binarySearch(int arr[], int n, int find)
{
	int low = 0, high=n-1, mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (find == arr[mid]) return mid;
		else if (find < arr[mid]) high = mid - 1;
		else if (find > arr[mid]) low = mid + 1;
	}
	return -1;
}
