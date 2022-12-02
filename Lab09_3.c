#include <stdio.h>
// baekjoon 1094

int main()
{
	int x, cnt=1, bar=64, min=64;
	scanf("%d", &x);

	if (x == 64 || x == 32 || x == 16 || x == 4 || x == 2 || x == 1);
	else
	{
		while (bar > x)
		{
			min /=2 ;
			if (bar - min >= x) bar -= min;
			else cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}