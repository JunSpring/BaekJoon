#include<iostream>
using namespace std;

int main()
{
	int N, num, min, max;
	cin >> N;

	cin >> num;
	max = num;
	min = num;

	for (int i = 1; i < N; i++)
	{
		cin >> num;

		if (min > num)
			min = num;
		else if (max < num)
			max = num;
	}

	cout << min << ' ' << max;
}