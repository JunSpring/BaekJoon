#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int is_prime(int num)
{
	if (num == 1)
		return 0;
	else if (num == 2)
		return 1;

	for (int i = 2; i <= (int)sqrt((float)num); i++)
	{
		if (num % i == 0)
			return 0;
	}

	return 1;
}

int main()
{
	int N, sum = 0;
	cin >> N;
	vector<int> num(N);

	for (int i = 0; i < num.size(); i++)
	{
		cin >> num[i];
		sum += is_prime(num[i]);
	}

	cout << sum;
}