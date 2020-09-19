#include <stdio.h>
int main()
{
	int i,n,j,t1,t2;
	int a[11]={1,4,11,34,37,56,77,81,94,100};
	printf("Enter a num:\n");
	scanf("%d",&n);
	if(n>a[9])
	{
		a[10]=n;
	}
	else
	{
		for(i=0;i<10;i++)
		{
			if(a[i]>n)
			{
				t1=a[i];
				a[i]=n;
				for(j=i+1;j<=10;j++)
				{
					t2=a[j];
					a[j]=t1;
					t1=t2;
				}
				break;
			}
		}
	}
	printf("New array:\n");
	for(i=0;i<11;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}