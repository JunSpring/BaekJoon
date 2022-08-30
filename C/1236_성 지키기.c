#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
	int N, M, count = 0, column[51], column_count = 0, answer = 0;
	char castle[51][51];
	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++)
		scanf("%s", &castle[i]);

	for (int j = 0; j < M; j++)
	{
		for (int i = 0; i < N; i++)
		{
			if (castle[i][j] == 'X')
			{
				count++;
				break;
			}
		}

		if (count == 0)
		{
			//column[column_count] = M;
			column_count++;
		}
		else
			count = 0;
	}
	
	count = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (castle[i][j] == 'X')
			{
				count++;
				break;
			}
		}

		if (count == 0)
		{
			if (column_count > 0)
			{
				//castle[i][column[column_count - 1]] = 'X';
				column_count--;
			}
			answer++;
		}
		else
			count = 0;
	}

	answer += column_count;
	printf("%d", answer);
}
