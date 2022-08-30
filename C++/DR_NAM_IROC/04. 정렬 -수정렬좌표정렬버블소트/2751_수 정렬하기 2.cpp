#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	std::ios::sync_with_stdio(false);
	
	int N, num;
	vector<int> number;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> num;
		number.push_back(num);
	}

	sort(number.begin(), number.end());

	for (int i = 0; i < N; i++)
		cout << number[i] << '\n';
}
