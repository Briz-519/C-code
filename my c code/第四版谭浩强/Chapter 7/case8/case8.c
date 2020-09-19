#include <stdio.h>
void print(char s[]);
int main()
{
	char str[10];
	printf("Enter 4 number:\n");
	scanf("%s",str);
	print(str);
	return 0;
}
void print(char s[])
{
	int i;
	for (i = 0; i < 4; i++)
	{
		printf("%c ",s[i]);
	}
}
