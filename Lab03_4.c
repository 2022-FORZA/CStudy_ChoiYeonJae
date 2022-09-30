#include <stdio.h>
// baekjoon 1110 더하기 사이클

int main()
{
	int n, a, b, cnt=0;

	scanf("%d", &n);
	int sum = n;

	while (1)
	{
		a = sum % 10;
		b = sum / 10 + sum % 10;
		if (b >= 10) b %= 10;

		sum = a * 10 + b;
		cnt++;
		if (n == sum) break;
	}

	printf("%d", cnt);
	return 0;
}