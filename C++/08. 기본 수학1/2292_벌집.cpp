#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int num, count = 1;
	cin >> num;

	while (true)
	{
		if (num == 1)
		{
			cout << 1;
			break;
		}

		else
		{
			if (num - (3 * (pow((float)count, 2.0) - count) + 1) <= 0)
			{
				cout << count;
				break;
			}
		}

		count += 1;
	}
}