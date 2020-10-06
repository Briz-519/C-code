#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE *fp1, *fp2;
	char a[10], b[10], c[20], t;
	int i, j;
	if ((fp1 = fopen("A.txt", "w")) == NULL)
	{
		printf("Can't open file!\n");
		exit(0);
	}
	printf("Enter string A:\n");
	gets(a);
	fputs(a, fp1);
	if ((fp2 = fopen("B.txt", "w")) == NULL)
	{
		printf("Can't open file!\n");
		exit(0);
	}
	printf("Enter string B:\n");
	gets(b);
	fputs(b, fp2);
	for (i = 0; i <= strlen(a); i++)
	{
		c[i] = a[i];
	}
	strcat(c, b);
	fclose(fp1);
	fclose(fp2);
	for (i = 0; i < strlen(c)-1; i++)
	{
		for (j = 0; j < strlen(c) - 1 - i; j++)
		{
			if (c[j]>c[j+1])
			{
				t = c[j];
				c[j] = c[j + 1];
				c[j + 1] = t;
			}
		}
	}
	printf("C:%s\n",c);
	if ((fp1 = fopen("C.txt", "w")) == NULL)
	{
		printf("Can't open file!\n");
		exit(0);
	}
	fputs(c, fp1);
	fclose(fp1);
	printf("C.txt is done!\n");
	return 0;
}