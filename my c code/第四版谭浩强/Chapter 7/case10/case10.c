#include <stdio.h>
#include <string.h>
int longest(char a[]);
int main()
{
	int i;
	char str[20];
	printf("Enter a passage:\n");
	gets(str);//避免使用scanf，scanf无法识别空格会导致最长的单词永远是第一个！
	printf("The longeat word is:\n");
	for (i = longest(str); str[i] != '\0'&&str[i] != ' '; i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");
	return 0;
}
int longest(char a[])
{
	int i, flag = 1, lon = 0, longest = 0, point, place = 0;
	for (i = 0; i<= (strlen(a)); i++)//此处需要循环包含'\0'，否则无法得到最后一个单词的长度，因此使用a[i]!='\0'是无法达到目的的！
	{
		if (a[i] >= 'a'&&a[i] <= 'z' || a[i] >= 'A'&&a[i] <= 'Z')
		{
			if (flag)
			{
				point = i;
				flag = 0;
			}
			else
			{
				lon++;
			}
		}
		else
		{
			if (lon > longest)
			{
				longest = lon;
				place = point;
			}
			lon = 0;
			flag = 1;
		}
	}
	return place;
}