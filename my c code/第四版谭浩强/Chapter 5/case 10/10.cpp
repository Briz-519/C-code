#include <stdio.h>
int main()
{
	int i,up=2,t;
	double s=0,S=0,bottom=1;
	for(i=1;i<=20;i++)
	{
		s=up/bottom;
		t=up;
		up+=bottom;
		bottom=t;
		S+=s;
	}
	printf("%f\n",S);
	return 0;
}