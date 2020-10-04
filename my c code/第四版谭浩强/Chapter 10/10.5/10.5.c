#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE *fp1, *fp2;
	fp1 = fopen("stu.dat", "r");
	fp2 = fopen("file1.txt", "w");
	while (!feof(fp1))
	{
		putchar(getc(fp1));
	}
	putchar(10);
	rewind(fp1);
	while (!feof(fp1))
	{
		putc(getc(fp1), fp2);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}