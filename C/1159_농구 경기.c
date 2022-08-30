#include <stdio.h>
#pragma warning(disable:4996)

int last_name_count[26] = { 0 };

void count(char last_name_first_letter)
{
	last_name_count[(int)last_name_first_letter - 97]++;
}

int main()
{
	int N, print_count = 0;
	scanf("%d", &N);

	char last_name[30];
	for (int i = 0; i < N; i++)
	{
		scanf("%s", &last_name);
		count(last_name[0]);
	}

	for (int i = 0; i < 26; i++)
	{
		if (last_name_count[i] >= 5)
		{
			printf("%c", i + 97);
			print_count++;
		}
	}

	if (print_count == 0)
		printf("PREDAJA");
}
