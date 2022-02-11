#include<iostream>
#include<stack>

using namespace std;

int main()
{
	int num, binary;
	cin >> num >> binary;

	stack<char> s;

	do
	{
		if (num % binary < 10)
		{
			s.push(num % binary + '0');
		}
		else
		{
			s.push(num % binary - 10 + 'A');
		}
		
		num /= binary;
	} while (num);

	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}
}