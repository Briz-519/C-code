#include <stdio.h>
int main()
{
	void sort(int **p);
	int i,**p,*a[5],num[5];
	printf("input 5 number:\n");
	for(i=0;i<5;i++)
	{
		a[i]=&num[i];
	}
	for(i=0;i<5;i++)
	{
		scanf("%d",&num[i]);
	}
	p=a;
	sort(p);
	printf("Sorted number:\n");
	for(i=0;i<5;i++)
	{
		printf("%d ",*a[i]);
	}
	return 0;
}
void sort(int **p)
{
	int i,j,*t;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(**(p+i)>**(p+j))
			{
				t=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=t;
			}
		}
	}
}