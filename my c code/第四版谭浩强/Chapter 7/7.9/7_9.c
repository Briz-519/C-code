#include <stdio.h>
#define N 5
int max(int x,int y);
int main()
{
	int a[N],m,n,i;
	printf("Enter %d number:\n",N);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	m=a[0];
	for(i=1;i<N;i++)
	{
		if(max(m,a[i])!=m)
		{
			m=a[i];
			n=i;
		}
	}
	printf("Max=%d,its position is %d\n",m,i-1);
}
int max(int x,int y)
{
	return x>y?x:y;
}