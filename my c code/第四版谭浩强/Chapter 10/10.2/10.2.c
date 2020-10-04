#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *in, *out;
	char ch, infile[10], outfile[10];
	printf("Input infile name:\n");
	scanf("%s", infile);
	printf("Input outfile name:\n");
	scanf("%s", outfile);
	if ((in == fopen(infile, "r")) == NULL)
	{
		printf("Can't open this file!\n");
		exit(0);
	}
	if ((out == fopen(outfile, "w")) == NULL)
	{
		printf("Can't open this file!\n");
		exit(0);
	}
	while (!feof(in))		//检查in所指向文件是否结束，如果结束则为1，否则为0
	{
		ch = fgetc(in);
		fputc(ch, out);
		putchar(ch);
	}
	putchar(10);
	fclose(in);
	fclose(out);
	return 0;
}