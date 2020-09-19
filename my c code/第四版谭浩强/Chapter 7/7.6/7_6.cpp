#include <stdio.h>
int age(int);
int main()
{
	printf("NO.5's age is %d\n",age(5));
	return 0;
}
int age(int n)
{
	int a;
	if(n==1)
	{
		a=10;
	}
	else
	{
		a=age(n-1)+2;
	}
	return a;
}