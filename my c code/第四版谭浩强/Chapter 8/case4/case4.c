#include <stdio.h>
int main()
{
	void swap(int a[20],int n,int m);
	int a[20],n,m,i;
	printf("How many number:\n");
	scanf("%d",&n);
	printf("input n number:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("You want to move:\n");
	scanf("%d",&m);
	swap(a,n,m);
	printf("New:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
void swap(int a[20],int n,int m)
{
	int a_end,*p;
	a_end=*(a+n-1);
	for(p=a+n-1;p>a;p--)
	{
		*p=*(p-1);
	}
	*p=a_end;
	m--;
	if(m>0)
	{
		swap(a,n,m);
	}
}