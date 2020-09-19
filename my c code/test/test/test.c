#include <stdio.h>
void swap(int a[]);
int main()
{
	int a[5], i, *p;
	p = a;
	for (i = 0; i < 5; i++)
	{
		scanf("%d",p++);
	}
	p = a;
	swap(p);
	for (i = 0; i < 5; i++)
	{
		printf("%d ",*p++);
	}
	return 0;
}
void swap(int *p)
{
	int *m, *n, t;
	n = p + 4;
	m = p + 2;
	for (; p < m; p++, n--)
	{
		t = *p;
		*p = *n;
		*n = t;
	}
}