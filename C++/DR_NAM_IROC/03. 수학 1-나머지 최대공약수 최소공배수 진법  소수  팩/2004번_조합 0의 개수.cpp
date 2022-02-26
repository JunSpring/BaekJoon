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
	Number up;
	Number left, right;

	cin >> up.num >> left.num;
	right.num = up.num - left.num;

	find_fact(up.num, &up.two, &up.five);
	find_fact(left.num, &left.two, &left.five);
	find_fact(right.num, &right.two, &right.five);

	cout << min(up.two - left.two - right.two, up.five - left.five - right.five);
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