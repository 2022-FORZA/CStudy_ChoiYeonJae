#include <stdio.h>
#include <string.h>

// 백준 10866

int deque[10001] = {0,};

int main()
{
	int n, input, count = 0;
	char order[12];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s", &order);
		if (!strcmp(order, "push_front"))
		{
			count++;
			for (int i = count; i > 0; i--)
			{
				deque[i] = deque[i-1];
			}
			scanf("%d", &input);
			deque[0] = input;
		}
		else if (!strcmp(order, "push_back"))
		{
			count++;
			scanf("%d", &input);
			deque[count - 1] = input;
		}
		else if (!strcmp(order, "pop_front"))
		{
			if (count == 0) printf("-1\n");
			else
			{
				printf("%d\n", deque[0]);
				deque[0] = 0;
				for (int i = 0; i < count; i++) deque[i] = deque[i + 1];
				count--;
			}
		}
		else if (!strcmp(order, "pop_back"))
		{
			if (count == 0) printf("-1\n");
			else
			{
				printf("%d\n", deque[count - 1]);
				deque[count - 1] = 0;
				count--;
			}
		}
		else if (!strcmp(order, "size"))
		{
			printf("%d\n", count);
		}
		else if (!strcmp(order, "empty"))
		{
			if (count == 0) printf("1\n");
			else printf("0\n");
		}
		else if (!strcmp(order, "front"))
		{
			if (count == 0) printf("-1\n");
			else printf("%d\n", deque[0]);
		}
		else if (!strcmp(order, "back"))
		{
			if (count == 0) printf("-1\n");
			else printf("%d\n", deque[count - 1]);
		}
	}
	return 0;
}
