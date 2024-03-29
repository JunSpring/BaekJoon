#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b)
{
	return a.first < b.first;
}

int main()
{
	cin.tie(NULL);
	std::ios::sync_with_stdio(false);
	
	int N, num;
	string name;
	vector<pair<int, string>> v;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> num >> name;
		v.push_back(pair<int, string>(num, name));
	}

	sort(v.begin(), v.end(), compare);
	
	for (int i = 0; i < N; i++)
		cout << v[i].first << v[i].second << '\n';
}
