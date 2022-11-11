#include <stdio.h>
//baekjoon 2553

int main()
{
	int n;
	long long result = 1;
	scanf("%d", &n);

	for (int i = 2; i <= n; i++)
	{
		result *= i;
		while ((result % 10) == 0) result /= 10;
		result %= 100000000000;
	}
	
	printf("%d", result % 10);

	return 0;
}