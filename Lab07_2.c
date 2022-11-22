#include <stdio.h>
#include <stdlib.h>
// baekjoon 10814

typedef struct {
	char name[101];
	int age;
	int order;
} person;

int compare(const void* a, const void* b)
{
	if (((person*)a)->age != ((person*)b)->age) return ((person*)a)->age > ((person*)b)->age;
	else return ((person*)a)->order > ((person*)b)->order;
}

int main()
{
	int n;
	scanf("%d", &n);
	person* arr = (person*)malloc(sizeof(person) * n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d %s", &arr[i].age, arr[i].name);
		arr[i].order = i;
	}

	qsort(arr, n, sizeof(arr[0]), compare);
	for (int i = 0; i < n; i++) printf("%d %s\n", arr[i].age, arr[i].name);
	free(arr);
	return 0;
}