#include <stdio.h>
#include <math.h>
int main()
{
	int a;
	double x0=1,x;
	printf("Enter a to calculate the square root:\n");
	scanf("%d",&a);
	x=(x0+a/x0)/2.0;
	while(fabs(x-x0)>=1e-5)
	{
		x0=x;
		x=(x0+a/x0)/2.0;
	}
	printf("%d's square root is %lf \n",a,x);
	return 0;
}