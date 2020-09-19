#include <stdio.h>
int letter = 0, number = 0, space = 0, other = 0;
void statistics(char a[]);
int main()
{
	char str[20];
	printf("Enter str:\n");
	gets(str);
	statistics(str);
	printf("Letter:%d\nNumber:%d\nSpace:%d\nOther:%d\n", letter, number, space, other);
	return 0;
}
void statistics(char a[])
{
	int i;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a'&&a[i] <= 'z'||a[i] >= 'A'&&a[i] <= 'Z')
		{
			letter++;
		}
		else if (a[i] >= '0'&&a[i] <= '9')
		{
			number++;
		}
		else if (a[i] == ' ')
		{
			space++;
		}
		else
			other++;
	}
}