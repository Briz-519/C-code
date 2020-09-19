#include <stdio.h>
void swap(int a[3][3]);
int main()
{
	int a[3][3], i, j;
	printf("Enter a 3x3 array:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &a[i][j]);
		}
	}
	swap(a);
	printf("New array:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void swap(int a[3][3])
{
	int i, j, t;
	for (i = 0; i < 3; i++)
	{
		for (j = i+1; j < 3; j++)
		{
			t = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = t;
		}
	}
}