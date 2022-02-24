#include<iostream>
#include<stack>
#include<deque>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	std::ios::sync_with_stdio(false);
	
	int n, num;
	bool chk = false;
	deque<int> main_num;
	vector<int> rest_num;
	stack<char> answer;

	vector<int> v1;
	vector<int> v2;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		if (num == n)
			chk = true;
		if (chk)
		{
			main_num.push_back(num);
			answer.push('-');
		}
		else
			rest_num.push_back(num);
	}

	chk = false;
	while (!main_num.empty())
	{
		if (v2.empty())
		{
			if (main_num.front() == n)
			{
				v2.push_back(main_num.front());
				main_num.pop_front();
				answer.push('+');
			}
			else
			{
				chk = true;
				break;
			}
		}
		else
		{
			if (main_num.front() + 1 == v2.back())
			{
				v2.push_back(main_num.front());
				main_num.pop_front();
				answer.push('+');
			}
			else if (*max_element(rest_num.begin(), rest_num.end()) + 1 == v2.back())
			{
				main_num.push_front(rest_num.back());
				rest_num.pop_back();
				answer.push('-');
			}
			else
			{
				chk = true;
				break;
			}
		}
	}

	if (chk)
	{
		cout << "NO";
		return 0;
	}
	
	while (!answer.empty())
	{
		cout << answer.top() << '\n';
		answer.pop();
	}
}