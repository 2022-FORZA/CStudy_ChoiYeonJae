#include <stdio.h>
#include <stdlib.h>
// baekjoon 2193

int main()
{
	int n;
	scanf("%d", &n); 
	long long* arr = (long long*)malloc(sizeof(long long) * (n+1));

	arr[1] = 1;
	arr[2] = 1;

	for (int i = 3; i <= n; i++) arr[i] = arr[i - 2] + arr[i - 1];

	printf("%lld", arr[n]);
	free(arr);

	return 0;
}