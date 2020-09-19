#include <stdio.h>
#define M 3
#define N 2
double average(double t[],int n);
int main()
{
	double a[M],b[N];
	int i;
	printf("Enter class1's score:\n");
	for(i=0;i<M;i++)
	{
		scanf("%lf",&a[i]);
	}
	printf("Enter class2's score:\n");
	for(i=0;i<N;i++)
	{
		scanf("%lf",&b[i]);
	}
	printf("Class1's average:%lf\n",average(a,M));
	printf("Class2's average:%lf\n",average(b,N));
}
double average(double t[],int n)
{
	int i;
	double sum=0;
	for(i=0;i<n;i++)
	{
		sum+=t[i];
	}
	return sum/n;
}