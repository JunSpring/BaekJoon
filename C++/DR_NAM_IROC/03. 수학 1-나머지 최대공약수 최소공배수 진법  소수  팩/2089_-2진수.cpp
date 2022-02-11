#include<iostream>

using namespace std;

void print(int num)
{
	cout << num << "\t" << num << " / -2 = " << num / -2 << "\t" << num << " % -2 = " << num % -2 << endl;
}

int main()
{
	for (int i = -100; i <= 100; i++)
	{
		print(i);
	}
}