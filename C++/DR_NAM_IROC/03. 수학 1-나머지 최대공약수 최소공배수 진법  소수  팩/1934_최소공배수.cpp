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

int lcm(int num1, int num2)
{
	return num1 * num2 / gcd(num1, num2);
}

int main()
{
	int n, num1, num2;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num1 >> num2;
		cout << lcm(num1, num2) << endl;
	}
}