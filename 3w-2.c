#include <stdio.h>
// baekjoon 2490

void printResult(int n)
{
	if (n == 0) printf("E\n");
	else printf("%c\n", 64 + n);
}

int main()
{
	int n;
	for (int i = 0; i < 3; i++)
	{
		int countZero = 0;
		for (int j = 0; j < 4; j++)
		{
			scanf("%d", &n);
			if (n == 0) countZero++;
		}
		printResult(countZero);
	}
	return 0;
}