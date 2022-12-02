#include <stdio.h>
// baekjoon 1748

int main()
{
	int n, k;
	long long int result=0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i *= 10) result += n-i+1;
	printf("%lld", result);
	return 0;
}