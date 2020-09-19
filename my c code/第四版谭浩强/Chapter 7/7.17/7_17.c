#include <stdio.h>
int fac(int n);
int main()
{
	int i;
	for (i = 1; i < 6; i++)
	{
		printf("%d!=%d\n",i,fac(i));
	}
	return 0;
}
int fac(int n)
{
	static int i = 1;
	i *= n;
	return i;
}