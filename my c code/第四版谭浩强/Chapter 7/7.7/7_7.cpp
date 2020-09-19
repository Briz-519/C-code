#include <stdio.h>
int fac(int n);
int main()
{
	int n;
	printf("Enter n:\n");
	scanf("%d",&n);
	printf("n!=%d\n",fac(n));
}
int fac(int n)
{
	int s;
	if(n==1)
	{
		s=n;
	}
	else
	{
		s=fac(n-1)*n;
	}
	return s;
}