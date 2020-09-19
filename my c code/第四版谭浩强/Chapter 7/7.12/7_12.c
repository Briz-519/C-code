#include <stdio.h>
#define N 5
void sort(int a[], int n);
int main()
{
	int a[N], i;
	printf("Enter %d number:\n", N);
	for (i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a,N);
	printf("New array:\n");
	for (i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
void sort(int a[], int n)
{
	int i, j, min, t;
	for (i = 0; i < n; i++)
	{
		min = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[min] > a[j])
			{
				min = j;
			}
		}
		t = a[min];
		a[min] = a[i];
		a[i] = t;
	}
}