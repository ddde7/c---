#include <stdio.h>
#include <string.h>

int convToInt()
{
	const int diff = 'A' - 'a';
	return diff;
}
int main(void)
{
	char str[50];
	printf("Input> ");
	fgets(str, sizeof(str), stdin);
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		if ('a' <= str[i] && 'z' >= str[i])
		{
			str[i] += convToInt();
		}
		else if ('A' <= str[i] && 'Z' >= str[i])
		{
			str[i] -= convToInt();
		}
		else
			continue;
	}
	printf("Output> ");
	puts(str);
		
	return 0;
}
