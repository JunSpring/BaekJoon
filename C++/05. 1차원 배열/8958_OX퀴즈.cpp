#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char OX[80];
	int N, score = 0, score_plus = 1;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> OX;

		for (int i = 0; i < strlen(OX); i++)
		{
			if (OX[i] == 'O')
			{
				score += score_plus;
				score_plus++;
			}

			else
				score_plus = 1;
		}

		cout << score << endl;
		score = 0;
		score_plus = 1;
	}
}