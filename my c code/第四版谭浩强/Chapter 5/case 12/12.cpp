#include <stdio.h>
int main()
{
	int n=1, i;
	for (i = 1; i < 10; i++)
	{
		n = (n + 1) * 2;
	}
	printf("First day the monkey has %d peaches\n",n);
}