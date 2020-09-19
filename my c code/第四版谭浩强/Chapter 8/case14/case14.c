#include <stdio.h>
int main()
{
	void sort(int *p,int n);
	int a[20],*p,i,n;
	printf("input number you want to sort:\n");
	scanf("%d",&n);
	printf("enter n number:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	p=&a[0];
	sort(p,n);
	printf("New array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(p+i));
	}
	return 0;
}
void sort(int *p,int n)
{
	int t,*p1,*p2;
	int i;
	for(i=0;i<n/2;i++)
	{
		p1=p+i;
		p2=p+(n-1-i);
		t=*p1;
		*p1=*p2;
		*p2=t;
	}
}