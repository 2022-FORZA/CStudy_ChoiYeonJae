#include <stdio.h>
// baekjoon 2588

int main()
{
	int a, b;
	scanf("%d \n", &a);
	scanf("%d", &b);
	printf("%d\n", a * (b % 10));
	printf("%d\n", a * ((b % 100) / 10));
	printf("%d\n", a * (b / 100));
	printf("%d", a * b);
	return 0;
}