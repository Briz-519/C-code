#include <stdio.h>
#define N 5
void swap(char a[]);
int main()
{
	char str[N];
	int i;
	printf("Enter %d number:\n",N);
	gets(str);
	swap(str);
	for (i = 0; i < N; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
	return 0;
}
void swap(char a[])
{
	int i, j;
	char t;
	for (i = 1; i < N; i++)
	{
		for (j = 0; (j < N - i)&&a[j]!='\0'; j++)
		{
			if (a[j] > a[j+1])
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
}