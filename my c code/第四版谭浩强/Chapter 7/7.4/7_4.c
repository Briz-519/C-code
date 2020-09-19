#include <stdio.h>
int main()
{
	double addtion(double a,double b);
	double a,b,s;
	printf("Enter two number to add:\n");
	scanf("%lf %lf",&a,&b);
	s=addtion(a,b);
	printf("Result:%lf\n",s);
	return 0;
}
double addtion(double a,double b)
{
	return a+b;
}