#include<iostream>
#include<string>
using namespace std;

void print(int start, string st)
{
	string print_st;

	if (start + 10 > st.size())
	{
		print_st = st.substr(start, st.size() - start);
		cout << print_st << endl;
		return;
	}
	else
		print_st = st.substr(start, 10);

	cout << print_st << endl;

	print(start + 10, st);
}

int main()
{
	string st;
	cin >> st;

	print(0, st);
}