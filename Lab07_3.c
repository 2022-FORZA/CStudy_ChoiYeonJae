#include <stdio.h>
// baekjoon 1347

int main()
{
	int n, minx=51, maxx=51, miny=51, maxy=51, x=51, y=51, way=0; 
	char str[103][103], input[50];

	scanf("%d", &n);
	scanf("%s", &input);

	for (int i = 0; i < 103; i++) for (int j = 0; j < 103; j++) str[i][j] = '0';

	str[x][y] = '.';

	for (int i = 0; i<n; i++)
	{
		if (input[i] == 'F') 
		{
			if (way == 0) x++; 
			else if (way == 1) y--;
			else if (way == 2) x--;
			else y++;
			str[x][y] = '.';
		}
		else if (input[i] == 'L')
		{
			if (way > 0) way--;
			else way = 3;
		}
		else
		{
			if (way < 3) way++;
			else way = 0;
		}

		if (x > maxx) maxx = x;
		if (x < minx) minx = x;
		if (y > maxy) maxy = y;
		if (y < miny) miny = y;
 	}

	for (int i = minx; i <= maxx; i++)
	{
		for (int j = miny; j <= maxy; j++)
		{
			if (str[i][j] == '0') str[i][j] = '#';
			printf("%c", str[i][j]);
		}
		printf("\n");
	}
	return 0;
}