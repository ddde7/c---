#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point
{
	char name[20];
	char country[20];
	int pop;

}Point;

int main()
{
	Point arr[3];
	printf("Input three cities:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("Name>");
		scanf(" %s", arr[i].name);
		printf("Country>");
		scanf(" %s", arr[i].country);
		printf("Population>");
		scanf("%d", &arr[i].pop);
	}
	printf("Printing the three cities:\n");
	for (int i = 0; i < 3; i++)
	{
		printf("%d. ", i + 1);
		puts(arr[i].name);
		printf(" in ");
		puts(arr[i].country);
		printf(" with a population of %d people\n", arr[i].pop);

	}
}