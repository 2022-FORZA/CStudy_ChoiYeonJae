#include <stdio.h>
#include <string.h>
//baekjoon 1120

int main()
{
	char a[52], b[52];
	scanf("%s %s", &a, &b);

	int alen = strlen(a);
	int blen = strlen(b);
	int gap = blen - alen;

	int df = blen;
	for (int i = 0; i <= gap; i++)
	{
		int result = 0;
		for (int j = 0; j < alen; j++)
		{
			if (a[j] != b[j + i])  result++;
		}
		if (df > result) df = result;
	}
	printf("%d", df);
	return 0;
}