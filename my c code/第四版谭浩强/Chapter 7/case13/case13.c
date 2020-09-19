#include <stdio.h>
double fuc(int n, int x);
int main()
{
	int n, x;
	printf("Enter n&x:\n");
	scanf("%d %d", &n, &x);
	printf("The result is %lf\n", fuc(n, x));
	return 0;
}
double fuc(int n, int x)
{
	if (n == 0)
	{
		return 1;
	}
	else if (n == 1)
	{
		return x;
	}
	else if (n >= 1)
	{
		return ((2 * n - 1)*x - fuc(n - 1, x) - (n - 1)*fuc(n - 2, x)) / n;
	}
}