#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>

int last_computer(int a, int b)
{
	int num_repeat[100];

	if (a == 1)
		return 1;
	else
	{
		a = a % 10;

		int first = a % 10;
		int length;

		for (int i = 1; ; i++)
		{
			if (first == (int)pow((double)a, (double)i) % 10 && i != 1)
			{
				length = i - 1;
				break;
			}
			num_repeat[i - 1] = (int)pow((double)a, (double)i) % 10;
		}
		if (b % length == 0)
			if (num_repeat[length - 1] == 0)
				return 10;
			else
				return num_repeat[length - 1];
		else
			return num_repeat[b % length - 1];
	}
}

int main()
{
	int N, a, b;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", last_computer(a, b));
	}

	return 0;
}