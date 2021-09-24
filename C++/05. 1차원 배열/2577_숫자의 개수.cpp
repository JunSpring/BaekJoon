#include<iostream>
#include<cstring>
#pragma warning(disable:4996)
using namespace std;

int main()
{
	int A, B, C, num_count[10] = { 0 };
	char num[100000];
	
	cin >> A >> B >> C;
	sprintf(num, "%d", A * B * C);

	for (int i = 0; i < strlen(num); i++)
		num_count[(int)num[i] - 48]++;

	for (int i = 0; i < 10; i++)
		cout << num_count[i] << endl;
}