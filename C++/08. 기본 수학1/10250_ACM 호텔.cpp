#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long long int count, H, W, N;
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		cin >> H >> W >> N;
		printf("%lld%02lld", N % H, (long long int)ceil((double)N / H));
	}
}