#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	std::ios::sync_with_stdio(false);
	
	vector<pair<int, int>> v;
	int N, num1, num2;
	
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> num1 >> num2;
		v.push_back(pair<int, int>(num1, num2));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++)
		cout << v[i].first << ' ' << v[i].second << '\n';
}
