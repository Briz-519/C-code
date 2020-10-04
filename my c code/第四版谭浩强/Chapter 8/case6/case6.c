#include <stdio.h>
int length(char *p);
int main()
{
	char str[20];
	char *p;
	printf("Enter a string:\n");
	scanf("%s",str);
	p = str;
	printf("This string has %d alphabets\n",length(p));
	return 0;
}
int length(char *p)
{
	int n = 0;
	while (*p != '\0')
	{
		p++;
		n++;
	}
	return n;
}
