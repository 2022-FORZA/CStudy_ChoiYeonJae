#include <stdio.h>
// baekjoon 1292

int sum(int n)
{
	int check = 1;
	int result = 0;
	for (int i = 1; i <= n; i++)
	{
		result += check;
		if (i == check * (check + 1) / 2) check++;
	}
	return result;
}

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	printf("%d", sum(m) - sum(n - 1));
	return 0;
}