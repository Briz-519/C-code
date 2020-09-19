#include <stdio.h>
int main()
{
	int length(char *str);
	char str[20];
	int len;
	printf("input string:\n");
	scanf("%s",str);
	len=length(str);
	printf("The length of string is:%d\n",len);
	return 0;
}
int length(char *str)
{
	int n=0;
	for(;*str!='\0';str++)
	{
		n++;
	}
	return n;
}