#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int N, F;
	scanf("%d", &N);
	scanf("%d", &F);

	int n = N / 100 * 100;

	for (int i = 0; i < 100; i++)
	{
		if ((n + i) % F == 0)
		{
			printf("%02d", i);
			break;
		}
	}
}