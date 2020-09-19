#include <stdio.h>
#include <math.h>
double X1, X2, p, q;
double equal(double a, double b, double c);
void greater(double a, double b, double c);
void less(double a, double b, double c);
int main()
{
	double a, b, c;
	printf("Enter a,b,c to calculate ax2+bx+c=0:\n");
	scanf_s("%lf %lf %lf", &a, &b, &c);
	if (b * b - 4 * a * c == 0)
	{
		printf("x1=x2=%lf", equal(a, b, c));
	}
	else if (b * b - 4 * a * c > 0)
	{
		greater(a, b, c);
		printf("x1=%lf\tx2=%lf\n", X1, X2);
	}
	else
	{
		less(a, b, c);
		printf("x1=%lf+%lf\tx2=%lf-%lf\n", p, q, p, q);
	}
	return 0;
}
double equal(double a, double b, double c)
{
	double x;
	x = (-b + sqrt(b * b - 4 * a * c) )/ (2 * a);
	return x;
}
void greater(double a, double b, double c)
{
	X1= (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	X2= (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
}
void less(double a, double b, double c)
{
	p = -b / (2 * a);
	q = sqrt(-(b * b - 4 * a * c)) / (2 * a);
}