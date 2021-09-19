#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int all_count, S1, S2, S3, dice_num[81] = { 0 }, answer;
	scanf("%d %d %d", &S1, &S2, &S3);
	all_count = S1 + S2 + S3;

	for (int i = 1; i <= S1; i++)
	{
		for (int j = 1; j <= S2; j++)
		{
			for (int k = 1; k <= S3; k++)
				dice_num[i + j + k]++;
		}
	}

	answer = 1;
	for (int i = 2; i <= all_count; i++)
		if (dice_num[answer] < dice_num[i]) answer = i;
	
	printf("%d", answer);
}