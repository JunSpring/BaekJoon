#pragma warning(disable:4996)
#include<stdio.h>

int main()
{
	int x, y, w, h, min;

	scanf("%d %d %d %d", &x, &y, &w, &h);

	min = (x < y) ? x : y;
	if (min > w - x) min = w - x;
	if (min > h - y) min = h - y;

	printf("%d", min);
}