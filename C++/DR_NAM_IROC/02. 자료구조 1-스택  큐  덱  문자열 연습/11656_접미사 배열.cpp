#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	vector<string> st;
	string text;

	cin >> text;

	for (int i = 0; i < text.size(); i++)
	{
		st.push_back(text.substr(i));
	}

	sort(st.begin(), st.end());

	for (int i = 0; i < st.size(); i++)
	{
		cout << st[i] << endl;
	}
}