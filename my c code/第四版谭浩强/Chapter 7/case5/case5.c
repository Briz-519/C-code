#include <stdio.h>
#include <string.h>
void reverse(char a[]);
int main()
{
	char a[20];
	printf("Enter a string:\n");
	scanf("%s",a);
	reverse(a);
	printf("New array:%s\n",a);
	return 0;
}
void reverse(char a[])
{
	int i, n;
	char t;
	n = strlen(a);
	for (i = 0; i = n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = t;
	}
}