#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// baekjoon 1181

char str[20001][51];

int cmp(const void* a, const void* b)
{
	if (strlen(a) > strlen(b)) return 1;
	else if (strlen(a) < strlen(b)) return -1;
	else return strcmp(a, b);
}

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) scanf("%s", str[i]);
	qsort(str, n, sizeof(str[0]), cmp);
	for (int i = 0; i < n; i++)
	{
		if (strcmp(str[i], str[i + 1])) printf("%s\n", str[i]);
	}
	return 0;
}