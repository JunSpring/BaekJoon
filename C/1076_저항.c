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

int main()
{
	char color_1[10];
	char color_2[10];
	char color_3[10];

	scanf("%s", &color_1);
	scanf("%s", &color_2);
	scanf("%s", &color_3);



	if (color_value(color_1) == 0 && color_value(color_2) == 0)
		printf("0");

	else if (color_value(color_1) != 0)
	{
		printf("%d", color_value(color_1));
		printf("%d", color_value(color_2));

		for (int i = 0; i < color_value(color_3); i++)
			printf("0");
	}

	else
	{
		printf("%d", color_value(color_2));

		for (int i = 0; i < color_value(color_3); i++)
			printf("0");
	}
}
