#include <stdio.h>
#include <math.h>
#include <string.h>

//baekjoon 1864

int change(char a);

int main()
{
	char input[9];
	while (1)
	{
		int len, result = 0;
		scanf("%s", &input);
		if (input[0] == '#') break;
		else
		{
			len = strlen(input);
			for (int i = 0; i < len; i++)
			{
				result += change(input[i])*pow(8, len-i-1);
			}
		}
		printf("%d\n", result);
	}
	return 0;
}

int change(char a)
{
	if (a == '-') return 0;
	else if (a == '\\') return 1;
	else if (a == '(') return 2;
	else if (a == '@') return 3;
	else if (a == '?') return 4;
	else if (a == '>') return 5;
	else if (a == '&') return 6;
	else if (a == '%') return 7;
	else if (a == '/') return -1;
}
