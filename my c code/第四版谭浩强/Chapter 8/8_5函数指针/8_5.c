#include <stdio.h>
/*
int main()
{
	int max(int,int);
	int (*p)(int,int);
	int a,b,c;
	p=max;
	printf("Please enter two number:\n");
	scanf("%d%d",&a,&b);
	c=(*p)(a,b);
	printf("max=%d\n",c);
	return 0;
}
int max(int a,int b)
{
	int c;
	if(a>b)
	{
		c=a;
	}
	else
	{
		c=b;
	}
	return c;
}
*/

/*
int main()
{
	int max(int a,int b);
	int min(int a,int b);
	int a,b,c,n;
	int (*p)(int,int);
	printf("input two number:\n");
	scanf("%d%d",&a,&b);
	printf("Please choose 1 or 2:\n");
	scanf("%d",&n);
	if(n==1)
	{
		p=max;
	}
	else if(n==2)
	{
		p=min;
	}
	c=(*p)(a,b);
	if(n==1)
	{
		printf("max=%d\n",c);
	}
	else
	{
		printf("min=%d\n",c);
	}
	return 0;
}
int max(int a,int b)
{
	int c;
	if(a>b)
		c=a;
	else
		c=b;
	return c;
}
int min(int a,int b)
{
	int c;
	if(a<b)
		c=a;
	else
		c=b;
	return c;
}
*/

/*
int main()
{
	void function(int (*p1)(int,int),int a,int b);
	int max(int a,int b);
	int min(int a,int b);
	int add(int a,int b);
	int a,b,n;
	printf("enter two number:\n");
	scanf("%d%d",&a,&b);
	printf("choose 1,2 or 3:\n");
	scanf("%d",&n);
	if(n==1)
	{
		printf("max=");
		function(max,a,b);
	}
	else if(n==2)
	{
		printf("min=");
		function(min,a,b);
	}
	else if(n==3)
	{
		printf("addtion=");
		function(add,a,b);
	}
	return 0;
}
void function(int (*p)(int,int),int a,int b)
{
	int end;
	end=(*p)(a,b);
	printf("%d\n",end);
}
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
int min(int a,int b)
{
	if(a<b)
		return a;
	else
		return b;
}
int add(int a,int b)
{
	return a+b;
}
*/

/*
#define A 3
#define B 4
int main()
{
	int *search(int (*p)[B]);
	int i,j,a[A][B]={{10,20,30,40},{50,60,70,80},{90,100,110,120}};
	int *p;
	for(i=0;i<A;i++)
	{
		p=search(a+i);
		if(p==*(a+i))
		{
			printf("The failed stu'grade is:");
			for(j=0;j<B;j++)
			{
				printf("%d\t",*(p+j));
			}
			printf("\n");
		}
	}
	return 0;
}
int *search(int (*p)[B])
{
	int i,*pt;
	pt=NULL;
	for(i=0;i<B;i++)
	{
		if(*(p[0]+i)<60)
		{
			pt=p[0];
		}
	}
	return pt;
}
*/
