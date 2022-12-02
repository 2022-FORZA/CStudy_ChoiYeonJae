#include <stdio.h>
#include <stdlib.h>
// baekjoon 25305

int cmp(const void* a, const void* b)
{
	int num1 = *(int*)a;
	int num2 = *(int*)b;

	if (num1 < num2) return 1;
	else if (num1 > num2) return -1;
	else return 0;
}
int main()
{
	int n, k, grade[1001];
	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++) scanf("%d", &grade[i]);
	qsort(grade, n, sizeof(int), cmp);

	printf("%d", grade[k - 1]);
	return 0;
}