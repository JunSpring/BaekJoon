#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>  

char pattern[51];
int pattern_length;

void pattern_comparison(char filename[])
{
	if (pattern[0] == NULL)
	{
		strcpy(pattern, filename);
		pattern_length = strlen(pattern);
	}
	else
	{
		for (int i = 0; i < pattern_length; i++)
		{
			if (pattern[i] != filename[i])
				pattern[i] = '?';
		}
	}
}

int main()
{
	int N;
	char filename[51];
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++)
	{
		scanf("%s", &filename);
		pattern_comparison(filename);
	}

	printf("%s", pattern);

	return 0;
}