#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long long int A, B, V;
	cin >> A >> B >> V;

	long long int minus = A - B;
	long long int day = (long long int)ceil((V-(double)A)/minus) + 1;

	cout << day;
}