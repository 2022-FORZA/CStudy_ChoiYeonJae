#include <stdio.h>
// baekjoon 2675

int main()
{
	int n, m;
	char str[21];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %s", &m, str);
		for (int j = 0; str[j] != '\0'; j++)
		{
			for (int k = 0; k < m; k++) printf("%c", str[j]);
		}
		printf("\n");
	}
	return 0;
}