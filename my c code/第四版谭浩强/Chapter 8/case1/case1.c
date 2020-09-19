#include <stdio.h>
int main()
{
	void swap(int *p1,int *p2);
	int *p1,*p2,*p3,a,b,c;
	p1=&a;
	p2=&b;
	p3=&c;
	printf("enter three number:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		swap(p1,p2);
	}
	if(a>c)
	{
		swap(p1,p3);
	}
	if(b>c)
	{
		swap(p2,p3);
	}
	printf("New:%d %d %d",a,b,c);
	return 0;
}
void swap(int *p1,int *p2)
{
	int p;
	p=*p1;
	*p1=*p2;
	*p2=p;
}