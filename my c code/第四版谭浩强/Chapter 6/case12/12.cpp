#include <stdio.h>
int main()
{
	int i,n=0;
	char a[20];
	printf("Enter password:\n");
	gets(a);
	for(i=0;a[i]!='\0';i++)//注意不要将循环条件控制成20次，应该是输入了几个字符就循环几次
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			a[i]=155-a[i];
		}
		else if(a[i]>='a'&&a[i]<='z')
		{
			a[i]=219-a[i];
		}
		else
			a[i]=a[i];
		n++;
	}
	for(i=0;i<n;i++)
	{
		printf("%c",a[i]);
	}
	printf("\n");
	return 0;
}