#include <stdio.h>
#include <string.h>
// baekjoon 1439

char input[1000001];
int main()
{
	int len_0 = 0, len_1 = 0;
	scanf("%s", &input);

	for (int i = 1; i < strlen(input); i++)
	{
		if (input[i - 1] != input[i]) (input[i - 1] == '0') ? len_0++ : len_1++;
		if (i == strlen(input) - 1) (input[i] == '0') ? len_0++ : len_1++;
	}
	
	printf("%d", (len_0 > len_1) ? len_1 : len_0);
	return 0;
}