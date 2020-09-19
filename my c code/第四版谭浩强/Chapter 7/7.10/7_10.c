#include <stdio.h>
#define N 5
double average(double a[N]);
int main()
{
	double a[N],aver;
	int i;
	printf("Enter %d number:\n",N);
	for(i=0;i<N;i++)
	{
		scanf("%lf",&a[i]);
	}
	aver=average(a);
	printf("Average=%lf\n",aver);
	return 0;
}
double average(double a[N])
{
	int i;
	double sum=0;
	for(i=0;i<N;i++)
	{
		sum+=a[i];
	}
	return sum/N;
}