#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.ignore();

	string order;
	queue<int> q;

	for (int i = 0; i < n; i++)
	{
		getline(cin, order);

		if (order[0] == 'p')
		{
			if (order[1] == 'u')
				q.push(stoi(order.substr(5)));
			else
			{
				if (q.empty())
				{
					cout << -1 << endl;
					continue;
				}

				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (order[0] == 's')
			cout << q.size() << endl;
		else if (order[0] == 'e')
			cout << q.empty() << endl;
		else if (order[0] == 'f')
		{
			if (q.empty())
			{
				cout << -1 << endl;
				continue;
			}

			cout << q.front() << endl;
		}
		else
		{
			if (q.empty())
			{
				cout << -1 << endl;
				continue;
			}

			cout << q.back() << endl;
		}
	}
}