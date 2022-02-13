#include<iostream>
#include<string>
#include<cmath>
#include<stack>
using namespace std;

int main()
{
	int binary_A, binary_B, m, num, sum = 0;
	cin >> binary_A >> binary_B >> m;
	stack<int> s;

	for (int i = 0; i < m; i++)
	{
		cin >> num;
		s.push(num);
	}
	for (int i = 0; i < m; i++)
	{
		sum += s.top() * pow(binary_A, i);
		s.pop();
	}

	while (sum)
	{
		s.push(sum % binary_B);
		sum /= binary_B;
	}

	while (!s.empty())
	{
		cout << s.top() << ' ';
		s.pop();
	}
}