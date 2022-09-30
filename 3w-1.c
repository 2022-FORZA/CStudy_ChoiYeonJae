#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// baekjoon 1935

int main()
{
	int n, index=0;
	double arr[101];
	char formula[101];
	scanf("%d", &n);
	scanf("%s", &formula);
	int* inputNumber = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) scanf("%d", &inputNumber[i]);

	for (int i = 0; i < strlen(formula); i++)
	{
		if (formula[i] == '*')
		{
			arr[index - 2] *= arr[index - 1];
			index--;
		}
		else if (formula[i] == '/')
		{
			arr[index - 2] /= arr[index - 1];
			index--;
		}
		else if (formula[i] == '+')
		{
			arr[index - 2] += arr[index - 1];
			index--;
		}
		else if (formula[i] == '-')
		{
			arr[index - 2] -= arr[index - 1];
			index--;
		}
		else 
		{
			arr[index] = inputNumber[formula[i]-65];
			index++;
		}
	}

	printf("%.2lf", arr[0]);
	return 0;
}