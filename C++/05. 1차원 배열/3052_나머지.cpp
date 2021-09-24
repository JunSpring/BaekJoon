#include<iostream>
using namespace std;

int main()
{
	int num, rest_count[42] = { 0 }, count = 0;
	
	for (int i = 0; i < 10; i++)
	{
		cin >> num;
		rest_count[num % 42]++;
	}

	for (int i = 0; i < 42; i++)
	{
		if (rest_count[i] != 0)
			count++;
	}

	cout << count;
}