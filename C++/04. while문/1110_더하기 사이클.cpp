#include<iostream>
using namespace std;

int main()
{
	int N, num = NULL, count = 0;
	cin >> N;
	num = N;

	do
	{
		num = num % 10 * 10 + (num / 10 + num % 10) % 10;
		count++;
	} while (N != num);

	cout << count;
}