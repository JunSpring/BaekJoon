#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

int main(void)
{
	int N, m, M, T, R;
	int num = 0, exercise_num = 0, pulse, count = 0;

	scanf("%d %d %d %d %d", &N, &m, &M, &T, &R);
	pulse = m;

	if (m + T > M)
	{
		printf("-1");
		return 0;
	}

	while (exercise_num < N)
	{
		if (pulse < m)
			pulse = m;

		if (pulse + T <= M)
		{
			count = (M - pulse) / T;
			if (exercise_num + count > N)
			{
				num += (N - exercise_num);
				break;
			}
			else
			{
				exercise_num += count;
				num += count;
				pulse += count * T;
			}
		}
		else
		{
			count = ceil((T + pulse - M) / (double)R);
			num += count;
			pulse -= count * R;
		}

		count = 0;
	}

	printf("%d", num);
}