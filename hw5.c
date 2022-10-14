#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int inttobi(int);


int main()
{
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	printf("%d", inttobi(num));
}

int inttobi(int num)
{
	if (num == 0)
		return 0;
	else
		return (num % 2 + inttobi(num / 2) * 10);
}