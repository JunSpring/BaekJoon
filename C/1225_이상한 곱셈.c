#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	char A[10002] = { NULL }, B[10002] = { NULL };
	long long int sum_A = 0, sum_B = 0, answer;

	scanf("%s %s", A, B);

	for (int i = 0; i < strlen(A); i++)
		sum_A += (long long)A[i] - 48;
	for (int i = 0; i < strlen(B); i++)
		sum_B += (long long)B[i] - 48;

	answer = sum_A * sum_B;
	printf("%lld", answer);
}