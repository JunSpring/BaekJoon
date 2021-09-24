#include<iostream>
using namespace std;

int main()
{
	int N, score, max, sum = 0;
	float avg;

	cin >> N;
	cin >> score;
	max = score;
	sum += score;

	for (int i = 1; i < N; i++)
	{
		cin >> score;
		sum += score;

		if (max < score)
			max = score;
	}

	avg = (float)sum / max * 100 / N;
	cout << avg;
}