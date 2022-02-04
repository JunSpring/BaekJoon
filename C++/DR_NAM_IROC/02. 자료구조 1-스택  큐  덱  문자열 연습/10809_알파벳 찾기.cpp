#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
	string st;
	cin >> st;

	int arr[26];
	memset(arr, -1, sizeof(arr));

	for (int i = 0; i < st.size(); i++)
	{
		if (arr[st[i] - 'a'] == -1)
			arr[st[i] - 'a'] = i;
	}

	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << ' ';
	}
}