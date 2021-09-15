#include <stdio.h>
#pragma warning(disable:4996)

int N, m, M, T, R;

int exercise(int num, int exercise_num, int pulse)
{
	int work = NULL, rest = NULL;

	if (pulse < m)
		pulse = m;
	else if (exercise_num < N && pulse >= m)
		rest = exercise(num + 1, exercise_num, pulse - R); 
	if (exercise_num < N && pulse <= M - T)
		work = exercise(num + 1, exercise_num + 1, pulse + T);

	if (exercise_num >= N)
		return num;
	else
	{
		if (work == NULL)
			return rest;
		else if (rest == NULL)
			return work;
		else
		{
			if (work < rest)
				return work;
			else
				return rest;
		}
	}
}

int main(void)
{
	scanf("%d %d %d %d %d", &N, &m, &M, &T, &R);
	printf("%d", exercise(0, 0, m));
}