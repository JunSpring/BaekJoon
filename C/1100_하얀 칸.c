#include <stdio.h>

int main() 
{
	char chess_board[8];
	int sum = 0;
	
	for(int i = 0; i < 8; i++)
	{
		scanf("%s", &chess_board);
		for(int j = 0; j < 8; j++)
		{
			if((i + j) % 2 == 0 && chess_board[j] == 'F') sum++;
		}
	}
	
	printf("%d", sum);
}