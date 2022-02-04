#include<iostream>
#include<string>

using namespace std;

int main()
{
	string st;
	getline(cin, st);

	for (int i = 0; i < st.size(); i++)
	{
		if (st[i] >= 'a' && st[i] <= 'z')
		{
			if (st[i] + 13 <= 'z')
				st[i] += 13;
			else
				st[i] -= 13;
		}
		else if (st[i] >= 'A' && st[i] <= 'Z')
		{
			if (st[i] + 13 <= 'Z')
				st[i] += 13;
			else
				st[i] -= 13;
		}
	}

	for (int i = 0; i < st.size(); i++)
		cout << st[i];
}