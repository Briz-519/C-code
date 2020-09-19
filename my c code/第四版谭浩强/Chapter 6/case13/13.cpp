#include <stdio.h>
int main()
{
	char a[10],b[10];
	int i=0,j=0;
	printf("Enter str1:\n");
	scanf("%s",a);
	printf("Enter str2:\n");
	scanf("%s",b);
	while(a[i]!='\0')
	{
		i++;
	}
	while(b[j]!='\0')
	{
		a[i++]=b[j++];
	}
	a[i]='\0';
	printf("New array:%s\n",a);
}