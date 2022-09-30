#include <stdio.h>

int main()
{
	for (int star = 1 ; star <= 9 ; star += 2)
	{
		int i = 0, j = 0;
		while(i < (9 - star) / 2)
		{
			printf(" ");
			i++;
		}
		while (j < star)
		{
			printf("*");
			j++;
		}
		printf("\n");

	}
	return 0;
}