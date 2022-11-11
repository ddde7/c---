#define _CRT_NO_WARNINGS
#include <stdio.h>

int print_arr(int arr[],int i)
{
	printf("arr%d: ", i);
	for (int j = 0; j <6; j++)
	{
		printf("%d ", arr[j]);
	}
	printf("\n");
}

int main()
{
	int arr1[] = { 1,2,3,4,5,6 };
	int arr2[] = { 7,8,9,10,11,12 };
	int* ptr1 = arr1, * ptr2 = arr2;
	int temp;

	print_arr(arr1, 1);
	print_arr(arr2, 2);

	for (int i = 0; i < 6; i++)
	{
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		*ptr1++;
		*ptr2++;
	}
	printf("\nafter swap\n");
	print_arr(arr1, 1);
	print_arr(arr2, 2);

}