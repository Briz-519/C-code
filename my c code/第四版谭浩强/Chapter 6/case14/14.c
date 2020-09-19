#include <stdio.h>
int main()
{
	int i,x;
	char a[10],b[10];
	printf("Enter str1:\n");
	gets(a);
	printf("Enter str2:\n");
	gets(b);
	i=0;
	while(a[i]!='\0'&&a[i]==b[i])//如果字符相等就检查下一位
	{
		i++;
	}
	if(a[i]=='\0'&&b[i]=='\0')
		x=0;
	else
		x=a[i]-b[i];
	printf("Result:%d\n",x);
}