#include <stdio.h>
#include <string.h>

// baekjoon 10845

int queue[100001] = {0,};

int main()
{
	int num, input, startIndex=0, maxIndex=0;
	char order[6];
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf("%s", &order);
		if (!strcmp(order, "push"))
		{
			scanf("%d", &input);
			queue[maxIndex] = input;
			maxIndex++;
		}
		else if (!strcmp(order, "pop"))
		{
			if (queue[startIndex] != 0)
			{
				printf("%d\n", queue[startIndex]);
				startIndex++;
			}
			else printf("-1\n");
		}
		else if (!strcmp(order, "size"))
		{
			printf("%d\n", maxIndex - startIndex);
		}
		else if (!strcmp(order, "empty"))
		{
			if (maxIndex-startIndex==0) printf("1\n");
			else printf("0\n");
		}
		else if (!strcmp(order, "front"))
		{
			if (maxIndex - startIndex == 0) printf("-1\n");
			else printf("%d\n", queue[startIndex]);
		}
		else if (!strcmp(order, "back"))
		{
			if (maxIndex == startIndex) printf("-1\n");
			else printf("%d\n", queue[maxIndex - 1]);
		}
	}
	return 0;
}