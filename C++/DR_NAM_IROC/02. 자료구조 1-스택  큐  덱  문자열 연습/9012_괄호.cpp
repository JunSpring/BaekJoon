#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
	int n, j;
	cin >> n;

	string st;
	stack<char> s;
	for (int i = 0; i < n; i++)
	{
		cin >> st;
		
		for (j = 0; j < st.size(); j++)
		{
			if (st[j] == '(')
			{
				s.push(st[j]);
			}
			else
			{
				if (s.empty())
					break;
				else
					s.pop();
			}
		}

		if (s.empty() && j == st.size())
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

		while (!s.empty())
			s.pop();
	}
}