#include <stdio.h>
#include <string.h>
void sort(int *p);
int main()
{
	int n[5], i;
	printf("Enter 5 number:\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &n[i]);
	}
	sort(n);
	printf("Reverse array:\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d ",n[i]);
	}
	return 0;
}
void sort(int *p)
{
	int i, t;
	for (i = 0; i < 2; i++)
	{
		t = *(p+i);
		*(p+i) = *(p + 4 - i);
		*(p + 4 - i) = t;
	}
}