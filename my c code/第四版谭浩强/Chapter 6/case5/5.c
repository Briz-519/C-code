#include <stdio.h>
#define N 5
void main()
{
	int a[N],i,t;
	printf("Enter %d number:\n",N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<N/2;i++)
	{
		t=a[i];
		a[i]=a[N-i-1];
		a[N-i-1]=t;
	}
	printf("New array:\n");
	for(i=0;i<N;i++)
	{
		printf("%d ",a[i]);
	}

}