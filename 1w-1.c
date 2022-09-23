#include <stdio.h>
#include <stdlib.h>

// ������ �ִ� ī�� ���� ��� ���α׷�

int compare(const void* a, const void* b);
int findMax(int arr[], int find);
int findMin(int arr[], int find);


int n, m;

int main()
{
	scanf("%d", &n);
	int* arr_n = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) scanf("%d", &arr_n[i]);

	scanf("%d", &m);
	int* arr_m = (int*)malloc(sizeof(int) * m);
	for (int i = 0; i < m; i++) scanf("%d", &arr_m[i]);

	qsort(arr_n, n, sizeof(int), compare);


	for (int i = 0; i < m; i++) printf("%d ", findMax(arr_n, arr_m[i])-findMin(arr_n, arr_m[i]));

	free(arr_n);
	free(arr_m);
	return 0;
}

int compare(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2) return -1;
	else if (num1 > num2) return 1;
	else return 0;
}


// �ش� ������ ó������ ũ�� �Ǵ� �ε��� ��ȯ
int findMax(int arr[], int find)
{
	int mid, start = 0, end = n - 1;

	while (start < end)
	{
		mid = (start + end) / 2;
		if (find < arr[mid]) end = mid;
		else start = mid + 1;
	}
	if (arr[end] == find) return end + 1;
	return end;
}

// �ش� ���� ó������ �����ϴ� �ε��� ��ȯ
int findMin(int arr[], int find)
{
	int mid, start = 0, end = n - 1;

	while (start < end)
	{
		mid = (start + end) / 2;
		if (find <= arr[mid]) end = mid;
		else start = mid + 1;
	}
	return end;
}

/*
findMax, findMin �Լ� ������ ��α� ������. 
https://jackpot53.tistory.com/33
*/
