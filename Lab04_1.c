#include <stdio.h>
// baekjoon 14888

int n, max = -1000000001, min = 1000000001, op[4], num[11];

void backTracking(int cnt, int sum, int add, int sub, int mul, int div)
{
	if (cnt == n-1)
	{
		if (sum > max) max = sum;
		if (sum < min) min = sum;
	}
	else
	{
		if (add > 0) backTracking(cnt + 1, sum+num[cnt+1], add - 1, sub, mul, div);
		if (sub > 0) backTracking(cnt + 1, sum-num[cnt + 1], add, sub-1, mul, div);
		if (mul > 0) backTracking(cnt + 1, sum*num[cnt + 1], add, sub, mul-1, div);
		if (div > 0) backTracking(cnt + 1, sum / num[cnt + 1], add, sub, mul, div - 1);
	}
}

int main()
{
	scanf("%d", &n); 
	for (int i = 0; i < n; i++) scanf("%d", &num[i]);
	for (int i = 0; i < 4; i++) scanf("%d", &op[i]);

	backTracking(0, num[0], op[0], op[1], op[2], op[3]);

	printf("%d\n%d", max, min);
	return 0;
}