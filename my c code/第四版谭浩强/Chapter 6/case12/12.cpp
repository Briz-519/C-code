#include <stdio.h>
int main()
{
	int i,n=0;
	char a[20];
	printf("Enter password:\n");
	gets(a);
	for(i=0;a[i]!='\0';i++)//ע�ⲻҪ��ѭ���������Ƴ�20�Σ�Ӧ���������˼����ַ���ѭ������
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