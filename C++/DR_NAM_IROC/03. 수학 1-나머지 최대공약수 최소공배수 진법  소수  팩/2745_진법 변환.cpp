#include<iostream>
#include<string>
#include<stack>
#include<cmath>

using namespace std;

int main()
{
	string st;
	stack<char> s;
	int binary, sum = 0;

	cin >> st >> binary;

	for (int i = 0; i < st.size(); i++)
	{
		s.push(st[i]);
	}

	for (int i = 0; i < st.size(); i++)
	{
		if (s.top() >= 'A')
		{
			sum += (s.top() + 10 - 'A') * pow(binary, i);
		}
		else
		{
			sum += (s.top() - '0') * pow(binary, i);
		}

		s.pop();
	}

	cout << sum;
}