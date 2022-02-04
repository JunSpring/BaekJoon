#include<iostream>
#include<string>

using namespace std;

int main()
{
	string st;

	while (getline(cin, st))
	{
		int upper = 0, lower = 0, num = 0, space = 0;

		for (int i = 0; i < st.size(); i++)
		{
			if (st[i] >= 'A' && st[i] <= 'Z')
				upper += 1;
			else if (st[i] >= 'a' && st[i] <= 'z')
				lower += 1;
			else if (st[i] >= '0' && st[i] <= '9')
				num += 1;
			else if (st[i] == ' ')
				space += 1;
		}

		cout << lower << ' ' << upper << ' ' << num << ' ' << space << endl;
	}
}