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
	if ((fp = fopen("D:\\my c code\\���İ�̷��ǿ\\Chapter 10\\10.3\\string.txt","w")) == NULL)	//C�����С�\��Ϊת���ַ��ı�־�����Ӧ��д�ɡ�\\��
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