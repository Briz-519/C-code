#include <stdio.h>
double max4(double a,double b,double c,double d);
double max2(double m,double n);
int main()
{
	double a,b,c,d,max;
	printf("Enter four number to compare:\n");
	scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	max=max4(a,b,c,d);
	printf("Max=%lf\n",max);
	return 0;
}
double max4(double a,double b,double c,double d)
{
	double m;
	m=max2(a,b);
	m=max2(m,c);
	m=max2(m,d);
	//m=max2(max2(max2(a,b),c),d);
	return m;
}
double max2(double m,double n)
{
	//return m>n?m:n;
	if(m>n)
		return m;
	else
		return n;
}