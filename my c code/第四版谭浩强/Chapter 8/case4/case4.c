#include <stdio.h>
void swap(int *p1, int n);
int main()
{
	int a[5], b[10], n;
	printf("Enter 5 number:\n");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the number of numbers you want to move:\n");
	scanf("%d", &n);
	swap(a, n);
	printf("The new array:\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
void swap(int *p, int n)
{
	int i, j = 0;
	int t[10];
	for (i = 0; i < 5; i++)
	{
		t[i] = p[i];
	}
	for (i = 0; i < n; i++)
	{
		p[i] = t[5-n+i];
	}
	for (i = n; i < 5; i++)
	{
		p[i] = t[i-n];
	}
}
