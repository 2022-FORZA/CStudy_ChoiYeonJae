#include <stdio.h>
#include <string.h>
// baekjoon 1541

int main()
{
	char str[51], op[50];
	int num[50], n=0,o=0, num1=0, check = 1;
	scanf("%s", str);

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '+' || str[i] == '-')
		{
			op[o++] = str[i];
			num[n++] = num1;
			num1 = 0;
		}
		else num1 = num1 * 10 + (str[i] - '0');
	}
	num[n] = num1, num[n+1] = op[o] = '\0';
	int result = num[0], k=1;

	for (int i = 0; i < o; i++, k++)
	{
		if (op[i] == '+')
		{
			if (check == 1)result += num[k];
			else result -= num[k];
		}
		else
		{
			result -= num[k];
			if (check == 1) check = 0;
		}
	}
	printf("%d", result);
	return 0;
}