#pragma warning(disable:4996)
#include <stdio.h>

int color_value(char color[])
{
	if (color[0] == 'b')
	{
		if (color[1] == 'l')
		{
			if (color[2] == 'a')
				return 0;
			else
				return 6;
		}
		else
			return 1;
	}

	else if (color[0] == 'r')
		return 2;

	else if (color[0] == 'o')
		return 3;

	else if (color[0] == 'y')
		return 4;

	else if (color[0] == 'g')
	{
		if (color[3] == 'y')
			return 8;
		else
			return 5;
	}

	else if (color[0] == 'v')
		return 7;

	else if (color[0] == 'w')
		return 9;
}

int color_product(char color[])
{
	if (color[0] == 'b')
	{
		if (color[1] == 'l')
		{
			if (color[2] == 'a')
				return 0;
			else
				return
		}
		else
		{

		}
	}

	else if (color[0] == 'r')
	{

	}

	else if (color[0] == 'o')
	{

	}

	else if (color[0] == 'y')
	{

	}

	else if (color[0] == 'g')
	{
		if (color[3] == 'y')
		else
	}

	else if (color[0] == 'v')
	{

	}

	else if (color[0] == 'w')
	{

	}
}

int main()
{
	char color[10];
	int sum = 0;

	scanf("%s", &color);
	if (color_value(color) != 0)
		printf("%d", color_value(color));

	scanf("%s", &color);
	printf("%d", color_value(color));

	scanf("%s", &color);
	sum *= color_product(color);

	printf("%d", sum);
}