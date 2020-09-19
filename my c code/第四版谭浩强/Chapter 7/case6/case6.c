#include <stdio.h>
void connect(char a[], char b[]);
int main()
{
	char a[20], b[10];
	printf("Enter 2 array to connect:\n");
	scanf("%s",a);
	scanf("%s",b);
	connect(a, b);
	printf("New array:%s\n",a);
	return 0;
}
void connect(char a[], char b[])
{
	int i = 0, j = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	while (b[j] != '\0')
	{
		a[i++] = b[j++];
	}
	a[i] = '\0';
}