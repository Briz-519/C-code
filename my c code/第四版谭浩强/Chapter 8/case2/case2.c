#include <stdio.h>
#include <string.h>
int main()
{
	void swap(char *p1,char *p2);
	char a[20],b[20],c[20];
	printf("input three strings:\n");
	gets(a);
	gets(b);
	gets(c);
	if(strcmp(a,b)>0)
	{
		swap(a,b);
	}
	if(strcmp(a,c)>0)
	{
		swap(a,c);
	}
	if(strcmp(b,c)>0)
	{
		swap(b,c);
	}
	printf("%s\n%s\n%s\n",a,b,c);
	return 0;	
}
void swap(char *p1,char *p2)
{
	char p[20];
	strcpy(p,p1);
	strcpy(p1,p2);
	strcpy(p2,p);
}