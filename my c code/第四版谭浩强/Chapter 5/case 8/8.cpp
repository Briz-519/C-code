#include <stdio.h>
int main()
{
	int i,a,b,c,A,B,C;
	for(i=100;i<=999;i++)
	{
		a=i/100;
		b=(i-a*100)/10;
		c=i%10;
		A=a*a*a;
		B=b*b*b;
		C=c*c*c;
		if(i==A+B+C)
		{
			printf("%d=%d+%d+%d\t",i,A,B,C);
		}
	}
	return 0;
}