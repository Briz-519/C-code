#include <stdio.h>
#include <string.h>
void scan(int *p);
void swap(int *p);
void print(int *p);
int main()
{
	int a[5];
	scan(a);
	swap(a);
	print(a);
}
void scan(int *p)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", p + i);
	}
}
void swap(int *p)
{
	int t, i;
	int *min, *max;
	min = p;
	max = p;
	for (i = 0; i < 5; i++)
	{
		if (*(p + i) < *min)
		{
			min = p + i;
		}
		else if (*(p + i) > *max)
		{
			max = p + i;
		}
	}
	t = p[0];
	p[0] = *min;
	*min = t;
	if (max == p)
	{
		max = min;
	}
	t = p[4];
	p[4] = *max;
	*max = t;
}
void print(int *p)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", *(p + i));
	}
}
