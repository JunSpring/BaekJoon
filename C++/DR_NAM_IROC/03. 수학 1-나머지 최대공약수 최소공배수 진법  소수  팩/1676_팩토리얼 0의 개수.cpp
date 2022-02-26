#include<iostream>
#include<algorithm>
using namespace std;

int fact(int);
int find_fact(int, int*, int*);

class Number
{
public:
	int num;
	int two = 0;
	int five = 0;
};

int main()
{
	Number n;
	cin >> n.num;

	cout << find_fact(n.num, &n.two, &n.five);
	//cout << n.two << ' ' << n.five << endl;
}

int find_fact(int num, int* two, int* five)
{
	int temp;

	for (int i = 1; i <= num; i++)
	{
		temp = i;

		while (temp % 2 == 0)
		{
			*two += 1;
			temp /= 2;
		}
		while (temp % 5 == 0)
		{
			*five += 1;
			temp /= 5;
		}
	}

	return min(*two, *five);
}