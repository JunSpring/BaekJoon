#include<iostream>
using namespace std;

int main()
{
	int up = 1, down = 1, count = 1, sum = 0, num, state;
	cin >> num;

	while (sum < num)
	{
		sum += count;
		count += 1;
	}

	if (count % 2 == 0)
		state = 1;
	else
		state = 0;

	if (state)
		down = count - 1;
	else
		up = count - 1;

	for (int i = 0; i < sum - num; i++)
	{
		if (state)
		{
			up += 1;
			down -= 1;
		}
		else
		{
			up -= 1;
			down += 1;
		}
	}

	cout << up << '/' << down;
}