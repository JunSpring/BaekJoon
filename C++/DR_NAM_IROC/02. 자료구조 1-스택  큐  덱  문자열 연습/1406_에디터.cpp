#include<iostream>
#include<string>
#include<queue>
#include<stack>
#include<algorithm>

using namespace std;

int main()
{
	string text, order, answer;
	cin >> text;

	int n;
	cin >> n;

	stack<char> s; //front
	stack<char> q; //back

	for (int i = 0; i < text.size(); i++)
		s.push(text[i]);

	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		getline(cin, order);

		if (order[0] == 'L')
		{
			if (s.empty())
				continue;
			
			q.push(s.top());
			s.pop();
		}
		else if(order[0] == 'D')
		{
			if (q.empty())
				continue;

			s.push(q.top());
			q.pop();
		}
		else if (order[0] == 'B')
		{
			if (s.empty())
				continue;

			s.pop();
		}
		else
		{
			s.push(order[2]);
		}
	}

	while (!q.empty())
	{
		s.push(q.top());
		q.pop();
	}

	while (!s.empty())
	{
		answer += s.top();
		s.pop();
	}

	reverse(answer.begin(), answer.end());

	cout << answer;
}