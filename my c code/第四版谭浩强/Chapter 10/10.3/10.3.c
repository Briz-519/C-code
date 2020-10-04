#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 3
int main()
{
	FILE *fp;
	char str[N][10], t[10];
	int i, j;
	printf("Enter %d strings:\n",N);
	for (i = 0; i < N; i++)
	{
		gets(str[i]);
	}
	for (i = 0; i < N - 1; i++)
	{
		for (j = 0; j < N - i; j++)
		{
			if (strcmp(str[j], str[j + 1])>0)
			{
				strcpy(t, str[j]);
				strcpy(str[j], str[j + 1]);
				strcpy(str[j + 1], t);
			}
		}
	}
	if ((fp = fopen("D:\\my c code\\第四版谭浩强\\Chapter 10\\10.3\\string.txt","w")) == NULL)	//C语言中“\”为转义字符的标志，因此应该写成“\\”
	{
		printf("Can't open file!\n");
		exit(0);
	}
	printf("New strings:\n");
	for (i = 0; i < N; i++)
	{
		fputs(str[i], fp);
		fputs("\n", fp);
		printf("%s\n", str[i]);
	}
	return 0;
}