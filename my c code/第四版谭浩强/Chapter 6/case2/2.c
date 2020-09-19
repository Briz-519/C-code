#include <stdio.h>
int main()
{
	int i,j,a[11],min,t;
	printf("Enter 10 number:\n");
	for(i=1;i<11;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<10;i++)
	{
		min=i;
		for(j=i+1;j<=10;j++)
		{
			if(a[min]>a[j])
				min=j;
		}
		t=a[min];
		a[min]=a[i];
		a[i]=t;
	}
	printf("New array:\n");
	for(i=1;i<11;i++)
	{
		printf("%d ",a[i]);
	}
}