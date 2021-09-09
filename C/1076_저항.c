#pragma warning(disable:4996)
#include <stdio.h>

int color_value(char color[])
{
	if (color == "black")
		return 0;
	else if (color == "brown")
		return 1;
	else if (color == "red")
		return 2;
	else if (color == "orange")
		return 3;
	else if (color == "yellow")
		return 4;
	else if (color == "green")
		return 5;
	else if (color == "blue")
		return 6;
	else if (color == "violet")
		return 7;
	else if (color == "grey")
		return 8;
	else if (color == "white")
		return 9;
}

int color_product(char color[])
{
	if (color == "black")
		return 1;
	else if (color == "brown")
		return 10;
	else if (color == "red")
		return 100;
	else if (color == "orange")
		return 1000;
	else if (color == "yellow")
		return 10000;
	else if (color == "green")
		return 100000;
	else if (color == "blue")
		return 1000000;
	else if (color == "violet")
		return 10000000;
	else if (color == "grey")
		return 100000000;
	else if (color == "white")
		return 1000000000;
}

int main()
{
	char color[10];
	int sum = 0;

	scanf("%s", &color);
	sum += color_value(color) * 10;
	printf("%d\n", sum);

	scanf("%s", &color);
	sum += color_value(color);

	scanf("%s", &color);
	sum *= color_product(color);

	printf("%d", sum);
}