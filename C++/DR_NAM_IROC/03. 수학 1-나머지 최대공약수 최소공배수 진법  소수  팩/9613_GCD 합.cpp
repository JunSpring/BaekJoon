#include<iostream>
#include<vector>

using namespace std;

int gcd(int num1, int num2)
{
	int temp;

	while (num2 != 0)
	{
		temp = num1 % num2;
		num1 = num2;
		num2 = temp;
	}

	return num1;
}

long long int f(int n)
{
	vector<int> v(n);
	long long int sum = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	for (int i = 0; i < v.size() - 1; i++)
	{
		for (int j = i + 1; j < v.size(); j++)
		{
			sum += gcd(v[i], v[j]);
		}
	}

	return sum;
}

int main()
{
	int N, n, sum;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> n;
		cout << f(n) << endl;
	}
}