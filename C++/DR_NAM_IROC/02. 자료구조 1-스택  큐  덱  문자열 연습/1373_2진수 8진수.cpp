#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
	string num, temp;
	int sum, rest;
	stack<int> s;

	cin >> num;
	rest = num.size() % 3;

	if (num.size()==1 && stoi(num) == 0)
	{
		cout << 0;
		return 0;
	}

	for (int i = 0; i < num.size() / 3; i++)
	{
		temp = num.substr(num.size() - (i + 1) * 3, 3);
		s.push((temp[0] - '0') * 4 + (temp[1] - '0') * 2 + temp[2] - '0');
	}
	if (rest == 2)
	{
		s.push((num[0] - '0') * 2 + num[1] - '0');
	}
	else if (rest == 1)
	{
		s.push(num[0] - '0');
	}

	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}
}