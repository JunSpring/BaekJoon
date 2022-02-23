#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	std::ios::sync_with_stdio(false);
	
	int prime[1000001];
	vector<int> number;
	bool find_num;
	int num, max_num = 0;

	while (true)
	{
		cin >> num;
		if (num == 0)
			break;
		if (max_num < num)
			max_num = num;
		number.push_back(num);
	}

	for (int i = 2; i <= max_num; i++)
	{
		prime[i] = i;
	}

	for (int i = 2; i <= sqrt(max_num); i++)
	{
		if (prime[i] == 0)
			continue;

		for (int j = i * i; j <= max_num; j += i)
			prime[j] = 0;
	}

	for (int i = 0; i < number.size(); i++)
	{
		find_num = false;
		for (int j = 3; j <= number[i] / 2; j++)
		{
			if (prime[j] != 0 && prime[number[i] - j] != 0)
			{
				cout << number[i] << " = " << j << " + " << number[i] - j << '\n';
				find_num = true;
				break;
			}
		}
		if (!find_num)
			cout << "Goldbach's conjecture is wrong." << '\n';
	}
}