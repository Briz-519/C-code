#include <stdio.h>
int main()
{
	int i;
	double s=100,t,S=0;
	for(i=1;i<=10;i++)
	{
		t=s;
		s/=2;
		S+=s+t;
	}
	printf("Sum=%f,10th=%f",S,s);
	return 0;
}