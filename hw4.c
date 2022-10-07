#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, j;
	printf("Please enter a number:");
	scanf("%d", &num);

	for (j = 2; j < num; j++)
	{
		if (num % j == 0)
		{
			break;
		}
	}
	if(j == num)
		printf("It is a prime number");
	else
		printf("It is not a prime number");
	
	return 0;
}
