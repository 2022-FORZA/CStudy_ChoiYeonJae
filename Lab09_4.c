#include <stdio.h>
#include <ctype.h>
// baekjoon 1550

int main()
{
	char input[7];
	int result = 0;
	scanf("%s", input);
	for (int i = 0; isxdigit(input[i]); i++) result = result * 16 + (isdigit(input[i]) ? input[i] - '0' : input[i] - 'A' + 10);

	printf("%d", result);
	return 0;
}