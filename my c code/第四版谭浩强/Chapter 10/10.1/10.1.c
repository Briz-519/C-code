#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	char ch, filename[10];
	printf("Enter filename:\n");
	scanf("%s", filename);
	if ((fp = fopen(filename, "w")) == NULL)
	{
		printf("Can't open this file!\n");
		exit(0);
	}
	ch = getchar();		//�������Ļس�
	printf("Input a string to save:(end with #)\n");
	ch = getchar();
	while (ch != '#')
	{
		fputc(ch, fp);
		putchar(ch);
		ch = getchar();
	}
	fclose(fp);
	putchar(10);		//ASCIIֵ�����з�
	return 0;
}