#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main()
{
	int C, N, score[1000], sum = 0, over = 0;
	float rate, avg;

	cin >> C;

	for (int i = 0; i < C; i++)
	{
		over = 0, sum = 0;
		cin >> N;

		for (int k = 0; k < N; k++)
		{
			cin >> score[k];
			sum += score[k];
		}

		avg = (float)sum / N;

		for (int k = 0; k < N; k++)
		{
			if (score[k] > avg)
				over++;
		}

		rate = (float)over / N * 100;
		printf("%.03f%%\n", rate);
	}
}