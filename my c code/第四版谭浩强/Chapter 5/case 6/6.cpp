#include <stdio.h>
int main()
{
	int i;
	double sum = 1, SUM = 0;
	for (i = 1; i <= 20; i++)
	{
		sum = sum*i;
		SUM +=sum;
	}
	printf("1!+2!+...+20!=%g\n",SUM);
	return 0;
}