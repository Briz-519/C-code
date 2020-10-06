#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	int i = 0;
	char str[10];
	if ((fp = fopen("test.txt", "w")) == NULL)
	{
		printf("Can't open file!\n");
		exit(0);
	}
	printf("Enter string:\n");
	gets(str);
	while (str[i] != '!')
	{
		if (str[i] >= 'a'&&str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		putchar(str[i]);
		fputc(str[i], fp);
		i++;
	}
	fclose(fp);
	fp = fopen("test.txt", "r");
	fgets(str, strlen(str) + 1, fp);
	printf("%s",str);
	fclose(fp);
	return 0;
}