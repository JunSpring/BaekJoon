#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
#include<cstdlib>

using namespace std;

int main()
{
	string A, B, C, D, st1, st2;
	bool ru = false;
	stack<int> s;

	cin >> A >> B >> C >> D;
	st1 = A + B;
	st2 = C + D;

	for (int i = 0; i < max(st1.size(), st2.size()); i++)
	{
		if (i == st1.size() && i == st2.size())
			break;
		else if (i == st1.size())
		{
			for (int j = i; j < st2.size(); j++)
			{
				if (ru)
				{
					s.push(st2[st2.size() - j - 1] - '0' + 1);
					ru = false;
				}
				else
					s.push(st2[st2.size() - j - 1] - '0');
			}
			break;
		}
		else if (i == st2.size())
		{
			for (int j = i; j < st1.size(); j++)
			{
				if (ru)
				{
					s.push(st1[st1.size() - j - 1] - '0' + 1);
					ru = false;
				}
				else
					s.push(st1[st1.size() - j - 1] - '0');
			}
		}
		else
		{
			if (ru)
			{
				if (st1[st1.size() - i - 1] + st2[st2.size() - i - 1] < 10)
				{
					s.push(st1[st1.size() - i - 1] - '0' + st2[st2.size() - i - 1] - '0' + 1);
					ru = false;
				}
				else
				{
					s.push((st1[st1.size() - i - 1] - '0' + st2[st2.size() - i - 1] - '0') % 10 + 1);
				}
			}
			else
			{
				if (st1[st1.size() - i - 1] + st2[st2.size() - i - 1] < 10)
				{
					s.push(st1[st1.size() - i - 1] - '0' + st2[st2.size() - i - 1] - '0');
				}
				else
				{
					s.push((st1[st1.size() - i - 1] - '0' + st2[st2.size() - i - 1] - '0') % 10);
					ru = true;
				}
			}
		}
	}

	if (ru)
		s.push(1);

	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}
}