#include <stdio.h>
#include <math.h>
// baekjoon 1297

int main()
{
	int d, h, w;
	scanf("%d %d %d", &d, &h, &w);

	double rate = d / sqrt(h * h + w * w);
	printf("%d %d", (int)(h * rate), (int)(w * rate));
	return 0;
}