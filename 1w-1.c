#include <stdio.h>
#include <stdlib.h>

// 가지고 있는 카드 개수 출력 프로그램

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


// 해당 값보다 처음으로 크게 되는 인덱스 반환
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

// 해당 값이 처음으로 등장하는 인덱스 반환
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
findMax, findMin 함수 구현은 블로그 참조함. 
https://jackpot53.tistory.com/33
*/
