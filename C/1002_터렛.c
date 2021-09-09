#pragma warning(disable:4996)
#include <stdio.h>

int location_num(int x1, int y1, int r1, int x2, int y2, int r2)
{
	if (x1 == x2 && y1 == y2)
	{
		if (r1 == r2)
			return -1;
		return 0;
	}

	else
	{
		int x_slope = x2 - x1;
		int y_slope = y2 - y1;

	}
}

int main()
{
	int T, x1, y1, r1, x2, y2, r2;
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		printf("%d\n", location_num(x1, y1, r1, x2, y2, r2));
	}
	return 0;
}