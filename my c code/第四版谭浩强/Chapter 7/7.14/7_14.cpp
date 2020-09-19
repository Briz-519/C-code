#include <stdio.h>
double Max=0, Min=0;
#define N 5
double average(double a[]);
int main()
{
	double a[N];
	int i;
	printf("Enter %d number:\n",N);
	for (i = 0; i < N; i++)
	{
		scanf_s("%lf",&a[i]);
	}
	printf("Max=%lf\nMin=%lf\nAverage=%lf\n",Max,Min, average(a));
	return 0;
}
double average(double a[])
{
	double sum=0;
	int i;
	Max = a[0];
	Min = a[0];
	for (i = 0; i < N; i++)
	{
		sum += a[i];
		if (a[i] > Max)
		{
			Max = a[i];
		}
		else if (a[i] < Min)
		{
			Min = a[i];
		}
	}
	return sum / N;
}