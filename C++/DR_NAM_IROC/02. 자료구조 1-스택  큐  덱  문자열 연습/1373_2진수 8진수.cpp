#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
	int num, sum;
	stack<int> s;

	cin >> num;

	if (num == 0)
	{
		cout << 0;
		return 0;
	}

	while (num)
	{
		sum = 0;
		
		if (num % 1000 >= 100)
		{
			sum += num % 10;
			num /= 10;
			sum += 2 * num % 10;
			num /= 10;
			sum += 4 * num % 10;
			num /= 10;

			s.push(sum);
		}
		else
		{
			if (num % 1000 >= 10)
			{
				sum += num % 10;
				num /= 10;
				sum += 2 * num % 10;
				num /= 100;
			}
			else
			{
				sum += num % 10;
				num /= 1000;
			}
			s.push(sum);
		}
	}

	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}
}