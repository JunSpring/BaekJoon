#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
	int sum = 0, stick = 0;
	string st;

	cin >> st;

	stack<char> s;

	for (int i = 0; i < st.size(); i++)
	{
		if (st[i] == '(')
		{
			s.push(st[i]);
		}

		else
		{
			s.pop();
			
			if (st[i - 1] == '(')
				sum += s.size();
			else
				sum += 1;
		}
	}

	cout << sum;
}