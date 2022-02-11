#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
	string st;
	cin >> st;

	int num;
	stack<int> s;

	if (st.size() == 1 && stoi(st) == 0)
	{
		cout << 0;
		return 0;
	}

	for (int i = 0; i < st.size(); i++)
	{
		num = st[i] - '0';

		s.push(num % 2);
		num /= 2;
		s.push(num % 2);
		s.push(num / 2);

		if (i == 0)
		{
			while (!s.top())
				s.pop();
		}

		while (!s.empty())
		{
			cout << s.top();
			s.pop();
		}
	}
}