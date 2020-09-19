#include <stdio.h>
#define N 5
int main()
{
	void input(int *p);
	void swap(int *p);
	void output(int *p);
	int a[N];
	input(a);
	swap(a);
	output(a);
	return 0;
}
void input(int *p)
{
	int i;
	printf("input %d number:\n",N);
	for(i=0;i<N;i++)
	{
		scanf("%d",p+i);
	}
}
void swap(int *p)
{
	int i,t;
	int *max=p,*min=p;
	for(i=0;i<N;i++)
	{
		if(*(p+i)>*max)
		{
			max=p+i;
		}
		else if(*(p+i)<*min)
		{
			min=p+i;
		}
	}
	t=*p;
	*p=*min;
	*min=t;
	if(max==p)
	{
		max=min;
	}
	t=*(p+N-1);
	*(p+N-1)=*max;
	*max=t;
}
void output(int *p)
{
	int i;
	for(i=0;i<N;i++)
	{
		printf("%d ",*(p+i));
	}
}