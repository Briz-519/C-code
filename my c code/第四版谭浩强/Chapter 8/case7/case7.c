#include <stdio.h>
#include <string.h>
int main()
{
	void copystr(char *p1,char *p2,int n);
	char a[20],b[20];
	int n;
	printf("input a string:\n");
	gets(a);
	printf("which character you want to begin to copy:\n");
	scanf("%d",&n);
	if(strlen(a)<n)
	{
		printf("input error!\n");
	}
	else
	{
		copystr(a,b,n);
		printf("New string:%s\n",b);
	}
	return 0;
}
void copystr(char *p1,char *p2,int n)
{
	int m=0;
	for(;m<n-1;m++)
	{
		*p1++;
	}
	for(;*p1!='\0';*p1++,*p2++)
	{
		*p2=*p1;
	}
	*p2='\0';
}
/*
void str_copy(char *p1, char *p2, int m)
{
	int i, j = 0;
	char t[20];
	for (i = 0; i<=strlen(p1); i++)
	{
		t[i] = p1[i];
	}
	for (i=0; i<strlen(t); i++)
	{
		p2[i] = t[i+m];
	}
}
*/
