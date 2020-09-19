#include <stdio.h>
int main()
{
	int m, n, t;
	printf("Enter two number to calculate:\n");
	scanf_s("%d %d",&m,&n);
	if (n > m)
	{
		t = m;
		m = n;
		n = t;
	}
	printf("max=%d\nmin=%d\n",max(m,n),min(m,n,max(m,n)));
	return 0;
}
int max(int a,int b)
{
	int i;
	for (i = a; i >= 0; i--)
	{
		if ((a % i == 0) && (b % i == 0))
		{
			return i;
		}
	}
}
int min(int a, int b, int n)
{
	return a * b / n;
}