#include <stdio.h>
#include <math.h>
int prime(int n);
int main()
{
	int n;
	printf("Enter a number:\n");
	scanf_s("%d", &n);
	if (prime(n))
	{
		printf("This is a prime number!\n");
	}
	else
	{
		printf("This is not a prime number!\n");
	}
	return 0;
}
int prime(int n)
{
	int i,flag=1;
	for (i = 2; i <=sqrt(n)&&flag==1; i++)
	{
		if (n % i == 0)
		{
			flag = 0;
		}
		else
		{
			flag = 1;
		}
	}
	return flag;
}