#include <stdio.h>
int main()
{
	void move(int *p);
	int a[5][5],*p,i,j;
	printf("input 5x5 array:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	p=*a;
	move(p);
	printf("New array:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void move(int *p)
{
	int i,j,t,*pmax,*pmin;
	pmax=p;
	pmin=p;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(*(p+5*i+j)>*pmax)
			{
				pmax=(p+5*i+j);
			}
			if(*(p+5*i+j)<*pmin)
			{
				pmin=(p+5*i+j);
			}
		}
	}
	t=*pmax;
	*pmax=*(p+12);
	*(p+12)=t;
	t=*pmin;
	*pmin=*p;
	*p=t;
	pmin=p+1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if((*(p+5*i+j)<*pmin)&&((p+5*i+j)!=p))
			{
				pmin=(p+5*i+j);
			}
		}
	}
	t=*pmin;
	*pmin=*(p+4);
	*(p+4)=t;
	pmin=p+1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if((*(p+5*i+j)<*pmin)&&((p+5*i+j)!=p)&&((p+5*i+j)!=(p+4)))
			{
				pmin=(p+5*i+j);
			}
		}
	}
	t=*pmin;
	*pmin=*(p+20);
	*(p+20)=t;
	pmin=p+1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if((*(p+5*i+j)<*pmin)&&((p+5*i+j)!=(p+20))&&((p+5*i+j)!=p)&&((p+5*i+j)!=(p+4)))
			{
				pmin=(p+5*i+j);
			}
		}
	}
	t=*pmin;
	*pmin=*(p+24);
	*(p+24)=t;
}