#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int num[5];
	scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);
	
	int min = num[0];
	for (int i = 1; i < 5; i++)
		if (min > num[i]) min = num[i];

	int answer, sum = 0;
	for (answer = min; answer <= num[0] * num[1] * num[2] * num[3] * num[4]; answer++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (answer % num[j] == 0) sum++;
			printf("%d\n", answer % num[j]);
		}
			

		if (sum >= 3) break;
		else sum = 0;
	}

	printf("%d", answer);
	printf(" %d", sum);
}