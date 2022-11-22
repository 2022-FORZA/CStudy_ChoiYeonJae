#include <stdio.h>
// baekjoon 9095

int main()
{
	int n, input, arr[12] = {0,1,2,4};
	scanf("%d", &n);

	for (int i = 4; i < 11; i++) arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &input);
		printf("%d\n", arr[input]);
	}
	return 0;
}