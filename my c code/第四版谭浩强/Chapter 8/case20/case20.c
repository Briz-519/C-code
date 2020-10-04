#include <stdio.h>
#include <string.h>
void sort(char *p);
int main()
{
	char str[5][20], *a[5], **p;
	int i;
	printf("Enter 5 strings:\n");
	for (i = 0; i < 5; i++)
	{
		gets(str[i]);
		a[i] = str[i];
	}
	p = a;
	sort(p);
	printf("New array:\n");
	for (i = 0; i < 5; i++)
	{
		printf("%s\n",a[i]);
	}
	return 0;
}
void sort(char **p)
{
	int i, j;
	char *t;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4 - i; j++)
		{
			if (strcmp(*(p + j), *(p + j + 1))>0)
			{
				t = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = t;
			}
		}
	}
}