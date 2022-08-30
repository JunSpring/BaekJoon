#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)

char bin_first[][10] = { "0", "1", "10", "11", "100", "101", "110", "111", "1000", "1001" };
char bin[][10] = { "000", "001", "10", "11", "100", "101", "110", "111" };
int pre, length = 0;

void oct2bin(int th, int num)
{
	if (th == 0)
	{
		if (th == length)
			printf("%s", bin_first[num]);
		else
			pre = num;
	}

	else
	{
		if (num >= 8)
		{
			pre += 1;
			num -= 8;
		}

		if (th == 1)
			printf("%s", bin_first[pre]);
		
		else
		{
			printf("%s", bin[pre]);
			if (th == length - 1)
				printf("%s", bin[num]);
		}

		pre = num;
	}
}

int main(void)
{
	int oct, num;
	scanf("%d", &oct);

	int n = oct;
	while (n > 0)
	{
		length++;
		n /= 10;
	}


	for (int i = 0; i < length; i++)
	{
		num = oct / (int)pow((double)10, (double)length - i - 1);
		oct = oct % (int)pow((double)10, (double)length - i - 1);

		oct2bin(i, num);
	}
}
