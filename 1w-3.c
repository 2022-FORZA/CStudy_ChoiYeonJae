#include <stdio.h>
#include <stdlib.h>
// 주사위 게임

int main()
{
	int s1, s2, s3, sum[81] = { 0 };
	scanf("%d %d %d", &s1, &s2, &s3);

	int max = s1 + s2 + s3, min = 3, result = 1, index;

	for (int i = 1; i <= s1; i++)
	{
		for (int j = 1; j <= s2; j++)
		{
			for (int k = 1; k <= s3; k++)
			{
				sum[i + j + k]++;
			}
		}
	}

	for (int i = 3; i <= max; i++)
	{
		if (sum[i] > result)
		{
			result = sum[i];
			index = i;
		}
	}

	printf("%d", index);
	return 0;
}