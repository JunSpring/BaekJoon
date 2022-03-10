#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

class student
{
public:
	string name;
	int Korean;
	int English;
	int Math;
};

bool compare(student s1, student s2)
{
	if (s1.Korean == s2.Korean && s1.English == s2.English && s1.Math == s2.Math)
		return s1.name < s2.name;

	if (s1.Korean == s2.Korean && s1.English == s2.English)
		return s1.Math > s2.Math;

	if (s1.Korean == s2.Korean)
		return s1.English < s2.English;

	return s1.Korean > s2.Korean;
}

int main()
{
	cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int N;
	student s;
	vector<student> v;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> s.name >> s.Korean >> s.English >> s.Math;
		v.push_back(s);
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < N; i++)
		cout << v[i].name << '\n';
}