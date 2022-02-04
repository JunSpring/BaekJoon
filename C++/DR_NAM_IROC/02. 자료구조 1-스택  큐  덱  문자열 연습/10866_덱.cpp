#include<iostream>
#include<string>
#include<deque>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.ignore();

	string order;
	deque<int> d;

	for (int i = 0; i < n; i++)
	{
		getline(cin, order);

		if (order[0] == 'p')
		{
			if (order[1] == 'u')
			{
				if (order[5] == 'f')
					d.push_front(stoi(order.substr(10)));
				else
					d.push_back(stoi(order.substr(10)));
			}
			else
			{
				if (order[4] == 'f')
				{
					if (d.empty())
					{
						cout << -1 << endl;
						continue;
					}
					cout << d.front() << endl;
					d.pop_front();
				}
				else
				{
					if (d.empty())
					{
						cout << -1 << endl;
						continue;
					}
					cout << d.back() << endl;
					d.pop_back();
				}
			}
		}
		else if (order[0] == 's')
		{
			cout << d.size() << endl;
		}
		else if (order[0] == 'e')
		{
			cout << d.empty() << endl;
		}
		else if (order[0] == 'f')
		{
			if (d.empty())
			{
				cout << -1 << endl;
				continue;
			}
			cout << d.front() << endl;
		}
		else
		{
			if (d.empty())
			{
				cout << -1 << endl;
				continue;
			}
			cout << d.back() << endl;
		}
	}
}