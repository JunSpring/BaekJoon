#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int num[5], temp;
	scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (num[j] > num[j + 1])
			{
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}

	int min = num[0];
	int answer, sum = 0;
	for (answer = min; answer <= num[2] * num[3] * num[4]; answer++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (answer % num[j] == 0) sum++;
		}


		if (sum >= 3) break;
		else sum = 0;
	}

	printf("%d", answer);
}