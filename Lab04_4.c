#include <stdio.h>

// baekjoon 1568

int main()
{
	int n, result=0;
	scanf("%d", &n);

	for (int i = 1; n != 0; i++)
	{
		if (n < i) i = 1;
		n -= i;
		result++;
	}

	printf("%d", result);
	return 0;
}