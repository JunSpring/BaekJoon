#include<iostream>
using namespace std;

int main()
{
	int num, max, max_st;

	cin >> num;
	max = num;
	max_st = 1;

	for (int i = 1; i < 9; i++)
	{
		cin >> num;
		if (max < num)
		{
			max = num;
			max_st = i + 1;
		}
	}

	cout << max << endl << max_st;
}