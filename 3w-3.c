#include <stdio.h>
// baekjoon 4504 배수찾기

int main()
{
	int check, input;
	scanf("%d", &check);
	while (1)
	{
		scanf("%d", &input);
		if (input == 0) break;
		else
		{
			if (input % check == 0) printf("%d is a multiple of %d.\n", input, check);
			else printf("%d is NOT a multiple of %d.\n", input, check);
		}
	}
	return 0;
}