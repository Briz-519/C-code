#include <stdio.h>
#include <math.h>
int main()
{
	int i,n,k;
	printf("Please input a number:\n");
	scanf("%d",&n);
	k=sqrt(1.0*n);
	for(i=2;i<=k;i++)
	{
		if(n%i==0)
			break;
	}
	if(i<=k)
		printf("This is not prime number!\n");
	else
		printf("This is a prime number!\n");
	return 0;
}