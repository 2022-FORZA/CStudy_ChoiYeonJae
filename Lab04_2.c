#include <stdio.h>
#include <stdlib.h>

// baekjoon 1021

int countRight = 0, countLeft = 0;

void pop(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++) arr[i] = arr[i + 1];
}

void moveRight(int arr[], int n)
{
	int last = arr[n - 1];
	for (int i = n - 1; i > 0; i--) arr[i] = arr[i - 1];
	arr[0] = last;
	countRight++;
}

void moveLeft(int arr[], int n)
{
	int first = arr[0];
	for (int i = 0; i < n - 1; i++) arr[i] = arr[i + 1];
	arr[n - 1] = first;
	countLeft++;
}

int search(int arr[], int find, int n)
{
	for (int i = 0; i < n; i++) if (arr[i] == find) return i;
	return -1;
}

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int* arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) arr[i] = 0;

	int* index = (int*)malloc(sizeof(int) * m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &index[i]);
		arr[index[i]-1] = i + 1;
	}

	for (int i = 0; i < m; i++)
	{
		int find = search(arr, i + 1, n);
		if (find < 0) find += n;
		else if (find > n) find -= n;

		if (find <= n / 2) for (int i = 0; i < find; i++) moveLeft(arr, n);
		else for (int i = n; i > find; i--) moveRight(arr, n);
		pop(arr, n);
		n--;
	}

	printf("%d", countLeft + countRight);
	free(arr);
	free(index);
	return 0;
}