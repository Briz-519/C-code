#include <stdio.h>
int main()
{
	int strcmp(char *p1,char *p2);
	char s1[10],s2[10],*p1,*p2;
	int x;
	printf("Enter string1:\n");
	gets(s1);
	p1=s1;
	printf("Enter string2:\n");
	gets(s2);
	p2=s2;
	x=strcmp(s1,s2);
	printf("result:%d\n",x);
	return 0;
}
int strcmp(char *p1,char *p2)
{
	int i;
	for(i=0;*(p1+i)==*(p2+i);i++)
	{
		if(*(p1+i)=='\0')
		{
			return 0;
		}
	}
	return (*(p1+i)-*(p2+i));
}